from collections import defaultdict

class Solution:
    def get_atom_count(self, formula: str) -> int:
        # Calculate the count
        atom_count_str = ''
        while self.i < len(formula) and formula[self.i] >= '0' and formula[self.i] <= '9':
            atom_count_str += formula[self.i]
            self.i += 1

        atom_count = 1
        if len(atom_count_str) > 0:
            atom_count = int(atom_count_str)
        
        return atom_count

    def build_atoms_map(self, formula: str):
        atoms_map = defaultdict(int)
        while self.i < len(formula):
            if formula[self.i] >= 'A' and formula[self.i] <= 'Z':
                # Build the atom name
                atom_name = formula[self.i]
                self.i += 1
                while self.i < len(formula) and formula[self.i] >= 'a' and formula[self.i] <= 'z':
                    atom_name += formula[self.i]
                    self.i += 1
                
                # Calculate the count
                atom_count = self.get_atom_count(formula)

                atoms_map[atom_name] += atom_count

            elif formula[self.i] == '(':
                self.i += 1
                # Recursive call the function
                inner_atoms_map = self.build_atoms_map(formula)

                # Return when we see `)`
                # We should check if there is any number followed by `)`
                atom_count = self.get_atom_count(formula)
                
                # Merge the map, the value should * atom_count
                for key in inner_atoms_map:
                    atoms_map[key] += inner_atoms_map[key] * atom_count
            
            elif formula[self.i] == ')':
                self.i += 1
                return atoms_map
            
        return atoms_map
                
    def countOfAtoms(self, formula: str) -> str:
        self.i = 0
        atoms_map = self.build_atoms_map(formula)

        sorted_atoms_key = sorted(atoms_map.keys())
        
        atoms_count_str = ""
        for key in sorted_atoms_key:
            if atoms_map[key] == 1:
                atoms_count_str += key
            else:
                atoms_count_str += key + str(atoms_map[key])
        
        return atoms_count_str
