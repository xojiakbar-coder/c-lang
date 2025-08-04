hello:
	@echo "Hello, World!"

FILES := main.c blah.c
COUNT := one
COUNT2 := one two

print_files:
	@echo "Files: $(FILES)"

_count:
	@printf "Count: %s\n" "$(COUNT)"

_count2:
	@printf "Count2: %s\n" "$(COUNT2)"
