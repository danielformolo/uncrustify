int bar;

// blank line should be inserted before this comment, not after
template<>
volatile
int x::
foo()
{
	return 0;
}
