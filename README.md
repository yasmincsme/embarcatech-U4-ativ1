<div align="center">
    <img src="https://moodle.embarcatech.cepedi.org.br/pluginfile.php/1/theme_moove/logo/1733422525/Group%20658.png" alt="Logo Embarcatech" height="100">
</div>

<br>

<div align="center">

# Atividade 1: Temporizador Periódico - Semáforo

</div>

## Descrição do Projeto

Este projeto tem como objetivo implementar um semáforo utilizando a função `add_repeating_timer_ms()` do Pico SDK. O semáforo alterna automaticamente entre os sinais vermelho, amarelo e verde em um intervalo de 3 segundos para cada alteração.

## Requisitos

Para a realização desta atividade, os seguintes requisitos devem ser atendidos:

1. **Sequência do Semáforo:** O acionamento dos LEDs inicia na cor vermelha, alterando para amarela e, em seguida, verde.
2. **Temporização:** O temporizador deve ser ajustado para um atraso de 3 segundos (3000 ms).
3. **Callback do Temporizador:** A mudança de estado dos LEDs deve ser implementada na função de callback do temporizador (`repeating_timer_callback()`).
4. **Saída Serial:** A rotina principal dentro do `while` deve imprimir uma mensagem a cada segundo (1000 ms).
5. **Experimento com BitDogLab:** Implementar o código usando o LED RGB da BitDogLab (GPIOs 11, 12 e 13) como alternativa aos LEDs individuais.

## Componentes Utilizados

- **Microcontrolador:** Raspberry Pi Pico W
- **LEDs:** Vermelho, Amarelo e Verde
- **Resistores:** 3x 330 Ω
- **Software:** Pico SDK
- **Simulação:** Wokwi

## Implementação

A implementação do semáforo segue o seguinte fluxo:
1. Inicialização dos GPIOs dos LEDs.
2. Configuração do temporizador periódico com `add_repeating_timer_ms()`.
3. Callback do temporizador alterna o estado dos LEDs a cada 3 segundos.
4. Impressão de mensagens na serial a cada 1 segundo dentro do loop principal.

## Simulação e Demonstração

A configuração sugerida para simulação no **Wokwi** pode ser visualizada na Figura 2 do enunciado. Para uma demonstração do funcionamento do projeto, acesse o seguinte link:

[Vídeo da simulação](https://www.dropbox.com/scl/fi/6w37qxzdq4ytljqvqzr6h/2025-01-25-17-48-11.mkv?rlkey=yjj1iqcfkx444xigglaxqw81e&dl=0)


## Instruções de Uso

1. **Clonar o Repositório**:

```bash
git clone https://github.com/yasmincsme/embarcatech-U4-ativ1.git
```

   

2. **Compilar e Carregar o Código**:
   No VS Code, configure o ambiente e compile o projeto com os comandos:

```bash	
cmake -G Ninja ..
ninja
```

3. **Interação com o Sistema**:
   - Conecte a placa ao computador.
   - Clique em run usando a extensão do raspberry pi pico.


## Autora:
Yasmin Cordeiro de Souza Meira


