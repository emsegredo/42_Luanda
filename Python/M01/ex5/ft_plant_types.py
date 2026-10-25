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
        print(f" Trunk daiameter:{self._trunk_diamter}cm")


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


if __name__ == "__main__":
    print("=== Garden Plant Registry ===")
    print("=== Flower")
    rose = Flower("Rose", "red", 15.0, 10)
    rose.show()
    print(f"[asking the {rose.name} to bloom]")
    rose.bloom()
    rose.show()
    print("\n=== Tree")
    oak = Tree("Oak", 200.0, 5.0, 365)
    oak.show()
    print(f"[asking the {oak.name} to produce shade]")
    oak.produce_shade()
    print("\n=== Vegetable")
    tomate = Vegetable("Tomate", 5.0, 10, "April")
    tomate.show()
    for i in range(tomate._age, 30):
        tomate.age()
        tomate.grow()
        tomate.nutritional_value()
    tomate.show()
