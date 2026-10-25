class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self._height = height
        self._age = age
        if self._height < 0.0:
            self._height = 15.0
        else:
            self._height = height
        if self._age < 0:
            self._age = 15
        else:
            self._age = age

    def set_height(self, height: float) -> None:
        if height < 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Age update rejected")
            return
        self._height = height
        print(f"Height updated: {self._height} days")

    def set_age(self, age: int) -> None:
        if age < 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Height update rejected")
            return
        self._age = age
        print(f"Age updated: {self._age} days")

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._age

    def grow(self) -> None:
        self._height += 0.8
        if self._height >= 28.2:
            self._height += 1.9

    def age(self) -> None:
        self._age += 1

    def show(self) -> None:
        print(f"{self.name}: {round(self._height, 1)}cm, {self._age} days old")

    @staticmethod
    def check_year(year: int) -> bool:
        return year > 365


class Flower(Plant):
    def __init__(self, name: str, color: str, height: float, age: int,):
        super().__init__(name, height, age)
        self.color = color
        self._bloom = 0

    def bloom(self) -> None:
        self._bloom = 1

    def show(self) -> None:
        super().show()
        print(f" Color: {self.color}")
        if self._bloom == 0:
            print(f" {self.name} has not bloomed yet")
        else:
            print(f" {self.name} is blooming beautifully!")


class Tree(Plant):
    def __init__(self, name: str, height: float, trunk_diamter: float,
                 age: int):
        super().__init__(name, height, age)
        self._trunk_diamter = trunk_diamter
        self._shade = 0

    def produce_shade(self) -> None:
        self._shade += 1
        if self._shade > 0:
            print(f"Tree {self.name} now produces a shade of "
                  f"{round(self._height, 1)}cm long and "
                  f"{round(self._trunk_diamter, 1)}cm wide.")

    def show(self) -> None:
        super().show()
        print(f" Trunk daiameter: {self._trunk_diamter}cm")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, age: int,
                 harvest_season: str):
        super().__init__(name, height, age)
        self.harvest_season = harvest_season
        self._nutritional_value = 0

    def grow(self) -> None:
        super().grow()
        self._height += 0.8 

    def age(self) -> None:
        super().age()

    def nutritional_value(self) -> None:
        self._nutritional_value += 1

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self.harvest_season}")
        print(f" Nutritional value: {self._nutritional_value}")


class Seed(Flower):
    def __init__(self, name: str, color: str, height: float, age: int):
        super().__init__(name, color, height, age)
        self.seeds = 0
    
    def bloom(self):
        super().bloom()
        self.seeds += 1

    def grow(self):
        super().grow()
    
    def age(self):
        super().age()
    
    def show(self):
        super().show()
        print(f" Seeds: {self.seeds}")


if __name__ == "__main__":
    print("=== Garden Plant Registry ===")
    print("=== Check year-old")
    print(f"Is 30 days more than a year? -> {Plant.check_year(30)}")
    print(f"Is 400 days more than a year? -> {Plant.check_year(400)}\n")
    print("\n=== Flower")
    rose = Flower("Rose", "yellow", 15.6, 23)
    rose.show()
    print(f"[estatistics for {rose.name}]")
    print("[ESTATISTICAS ENTRAM AQUI...........]")
    print(f"[asking the {rose.name} to grow and bloom]")
    rose.bloom()
    rose.grow()
    rose.show()
    print(f"[estatistics for {rose.name}]")
    print("[ESTATISTICAS ENTRAM AQUI...........]")
   
    print("\n=== Tree")
    oak = Tree("Oak", 200.0, 5.0, 365)
    oak.show()
    print(f"[estatistics for {oak.name}]")
    print("[ESTATISTICAS ENTRAM AQUI...........]")
    
    
    print("\n=== Vegetable")
    
    print("\n=== Seed")
    seed = Seed("Sunflower", "green", 80.0, 45)
    seed.show()
    print(f"[make sunflower grow, age and bloom]")
    for i in range(seed._age, 66):
        seed.age()
        seed.grow()
        seed.bloom()
    seed.show()
    print(f"[statistics for {seed.name}]")
    print("[ESTATISTICAS ENTRAM AQUI...........]")
    # print("\n=== Anonymous")
    # any = Plant.Anonymous("Unknown", 0.0, 0)


   
