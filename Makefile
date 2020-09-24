# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalazon <cpalazon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/03 11:52:22 by cpalazon          #+#    #+#              #
#    Updated: 2020/02/03 11:52:25 by cpalazon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cub3d

SRCDIR	= ./src
INCDIR	= ./includes
OBJDIR	= ./obj

SRC		= main.c \
		  get_next_line_utils.c \
		  get_next_line.c \
		  mapcreator.c \
		  errors.c \
		  screenshot.c \
		  drawskyfloor.c \
		  draw_sprite.c \
		  textures.c \
		  resolution.c \
		  check_map.c \
		  mapgenerator.c \
		  cub_utils.c \
		  keys.c \
		  move.c \
		  raycasting.c \

OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
MLXDIR	= ./minilibx_opengl_20191021
MLX_LNK	= -lmlx -framework OpenGL -framework AppKit

all: obj $(MLX_LIB) $(NAME)

obj:
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(MLX_INC) -I $(INCDIR) -o $@ -c $<

$(MLX_LIB):
	@make -C $(MLXDIR)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(MLX_LNK) -lm -o $(NAME)

clean:
	@rm -rf $(OBJDIR)
	@make -C $(MLXDIR) clean

fclean: clean
	@rm -f $(NAME)

re: fclean all
.PHONY:		all clean fclean re