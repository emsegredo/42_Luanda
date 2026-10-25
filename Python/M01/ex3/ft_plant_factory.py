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
    oak = Plant("Oak", 200.0, 365)
    cactus = Plant("Cactus", 5.0, 90)
    sunflower = Plant("Sunflower", 80.0, 45)
    fern = Plant("Fern", 15.0, 120)

    plants = [rose, oak, cactus, sunflower, fern]

    for plant in plants:
        print("Created:", end=" ")
        plant.show()
