def ft_count_harvest_recursive() -> None:
    days = input("Days until harvest: ")
    aux(int(days))
    print("Harvest time!")


def aux(days: int, count: int = 1) -> None:
    if count <= days:
        print(f"Day {count}")
        aux(days, count + 1)
