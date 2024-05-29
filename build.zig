const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const lib = b.addStaticLibrary(.{
        .name = "ft",
        .target = target,
        .optimize = optimize,
    });

    lib.addIncludePath(b.path("array"));
    lib.addIncludePath(b.path("ctype"));
    lib.addIncludePath(b.path("gnl"));
    lib.addIncludePath(b.path("io"));
    lib.addIncludePath(b.path("list"));
    lib.addIncludePath(b.path("printf"));
    lib.addIncludePath(b.path("string"));

    lib.addCSourceFiles(.{ .files = &.{
        "array/ft_arrdup.c",
        "array/ft_arrfree.c",
        "array/ft_arrlen.c",
        "array/ft_arrprint.c",
        "array/ft_resize_array.c",
        "ctype/ft_ctype.c",
        "gnl/ft_get_next_line.c",
        "gnl/ft_get_next_line_utils.c",
        "io/ft_putchar_fd.c",
        "io/ft_putendl_fd.c",
        "io/ft_putstr_fd.c",
        "list/ft_lstadd_back.c",
        "list/ft_lstadd_front.c",
        "list/ft_lstclear.c",
        "list/ft_lstdelone.c",
        "list/ft_lstiter.c",
        "list/ft_lstlast.c",
        "list/ft_lstmap.c",
        "list/ft_lstnew.c",
        "list/ft_lstsize.c",
        "printf/ft_printf.c",
        "string/ft_atoi.c",
        "string/ft_atol.c",
        "string/ft_bzero.c",
        "string/ft_calloc.c",
        "string/ft_count_words.c",
        "string/ft_isinstr.c",
        "string/ft_isinstrr.c",
        "string/ft_itoa.c",
        "string/ft_memchr.c",
        "string/ft_memcmp.c",
        "string/ft_memcpy.c",
        "string/ft_memmove.c",
        "string/ft_mempcpy.c",
        "string/ft_memrchr.c",
        "string/ft_memset.c",
        "string/ft_realloc_str.c",
        "string/ft_safe_strlen.c",
        "string/ft_split.c",
        "string/ft_stpcpy.c",
        "string/ft_stpncpy.c",
        "string/ft_strchr.c",
        "string/ft_strcmp.c",
        "string/ft_strcpy.c",
        "string/ft_strdup.c",
        "string/ft_striteri.c",
        "string/ft_strjoin.c",
        "string/ft_strjoinfree.c",
        "string/ft_strlcat.c",
        "string/ft_strlcpy.c",
        "string/ft_strlen.c",
        "string/ft_strlen_c.c",
        "string/ft_strmapi.c",
        "string/ft_strnchr.c",
        "string/ft_strncmp.c",
        "string/ft_strndup.c",
        "string/ft_strnlen.c",
        "string/ft_strnstr.c",
        "string/ft_strrchr.c",
        "string/ft_strreplace.c",
        "string/ft_strstr.c",
        "string/ft_strtrim.c",
        "string/ft_substr.c",
    }, .flags = &.{
        "-Wall",
        "-Werror",
        "-Wextra",
    } });

    lib.linkLibC();

    b.installArtifact(lib);
}
