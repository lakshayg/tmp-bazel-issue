template <typename T, typename U>
struct SizeOf {
  static constexpr size_t value = sizeof(T);
};
