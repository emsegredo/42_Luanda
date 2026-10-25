class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self._age = age

    def grow(self) -> None:
        self.height += 0.8
        if self.height >= 28.2:
            self.height += 1.9

    def age(self) -> None:
        self._age += 1

    def show(self) -> None:
        print(f"{self.name}: {round(self.height, 1)}cm, {self._age} days old")


if __name__ == "__main__":
    print("=== Garden Plant Registry ===")
    rose = Plant("Rose", 25.0, 30)
    rose.show()
    for i in range(1, 8):
        print(f"=== Day {i} ===")
        rose.grow()
        rose.age()
        rose.show()
    print(f"Growth this week: {round(rose.height - 25.0, 1)}cm")
