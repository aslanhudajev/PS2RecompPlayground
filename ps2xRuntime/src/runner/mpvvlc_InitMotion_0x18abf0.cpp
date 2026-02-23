#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMotion
// Address: 0x18abf0 - 0x18afa0
void mpvvlc_InitMotion_0x18abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMotion");


    ctx->pc = 0x18abf0u;

    // 0x18abf0: 0x3c020024
    ctx->pc = 0x18abf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18abf4: 0x2403007f
    ctx->pc = 0x18abf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x18abf8: 0x24442038
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8248));
    // 0x18abfc: 0x24020017
    ctx->pc = 0x18abfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
label_18ac00:
    // 0x18ac00: 0xa4830000
    ctx->pc = 0x18ac00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ac04: 0x2442ffff
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ac08: 0x24840002
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ac0c: 0x0
    ctx->pc = 0x18ac0cu;
    // NOP
    // 0x18ac10: 0x0
    ctx->pc = 0x18ac10u;
    // NOP
    // 0x18ac14: 0x441fffa
    ctx->pc = 0x18AC14u;
    {
        const bool branch_taken_0x18ac14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18ac14) {
            ctx->pc = 0x18AC00u;
            goto label_18ac00;
        }
    }
    ctx->pc = 0x18AC1Cu;
    // 0x18ac1c: 0x24030010
    ctx->pc = 0x18ac1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x18ac20: 0x306200ff
    ctx->pc = 0x18ac20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18ac24: 0x0
    ctx->pc = 0x18ac24u;
    // NOP
label_18ac28:
    // 0x18ac28: 0x2466ffff
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ac2c: 0x32823
    ctx->pc = 0x18ac2cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18ac30: 0x34420b00
    ctx->pc = 0x18ac30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2816));
    // 0x18ac34: 0x182d
    ctx->pc = 0x18ac34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ac38:
    // 0x18ac38: 0xa4820000
    ctx->pc = 0x18ac38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ac3c: 0x2463ffff
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ac40: 0x24840002
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ac44: 0x0
    ctx->pc = 0x18ac44u;
    // NOP
    // 0x18ac48: 0x0
    ctx->pc = 0x18ac48u;
    // NOP
    // 0x18ac4c: 0x461fffa
    ctx->pc = 0x18AC4Cu;
    {
        const bool branch_taken_0x18ac4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ac4c) {
            ctx->pc = 0x18AC38u;
            goto label_18ac38;
        }
    }
    ctx->pc = 0x18AC54u;
    // 0x18ac54: 0x30a200ff
    ctx->pc = 0x18ac54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18ac58: 0x182d
    ctx->pc = 0x18ac58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac5c: 0x34420b00
    ctx->pc = 0x18ac5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2816));
label_18ac60:
    // 0x18ac60: 0xa4820000
    ctx->pc = 0x18ac60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ac64: 0x2463ffff
    ctx->pc = 0x18ac64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ac68: 0x24840002
    ctx->pc = 0x18ac68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ac6c: 0x0
    ctx->pc = 0x18ac6cu;
    // NOP
    // 0x18ac70: 0x0
    ctx->pc = 0x18ac70u;
    // NOP
    // 0x18ac74: 0x461fffa
    ctx->pc = 0x18AC74u;
    {
        const bool branch_taken_0x18ac74 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ac74) {
            ctx->pc = 0x18AC60u;
            goto label_18ac60;
        }
    }
    ctx->pc = 0x18AC7Cu;
    // 0x18ac7c: 0xc0182d
    ctx->pc = 0x18ac7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac80: 0x2862000b
    ctx->pc = 0x18ac80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 11));
    // 0x18ac84: 0x1040ffe8
    ctx->pc = 0x18AC84u;
    {
        const bool branch_taken_0x18ac84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18AC88u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18ac84) {
            ctx->pc = 0x18AC28u;
            goto label_18ac28;
        }
    }
    ctx->pc = 0x18AC8Cu;
    // 0x18ac8c: 0x2403000a
    ctx->pc = 0x18ac8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x18ac90: 0x306200ff
    ctx->pc = 0x18ac90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18ac94: 0x0
    ctx->pc = 0x18ac94u;
    // NOP
label_18ac98:
    // 0x18ac98: 0x2466ffff
    ctx->pc = 0x18ac98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ac9c: 0x32823
    ctx->pc = 0x18ac9cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18aca0: 0x34420a00
    ctx->pc = 0x18aca0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2560));
    // 0x18aca4: 0x24030001
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_18aca8:
    // 0x18aca8: 0xa4820000
    ctx->pc = 0x18aca8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18acac: 0x2463ffff
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18acb0: 0x24840002
    ctx->pc = 0x18acb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18acb4: 0x0
    ctx->pc = 0x18acb4u;
    // NOP
    // 0x18acb8: 0x0
    ctx->pc = 0x18acb8u;
    // NOP
    // 0x18acbc: 0x461fffa
    ctx->pc = 0x18ACBCu;
    {
        const bool branch_taken_0x18acbc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18acbc) {
            ctx->pc = 0x18ACA8u;
            goto label_18aca8;
        }
    }
    ctx->pc = 0x18ACC4u;
    // 0x18acc4: 0x30a200ff
    ctx->pc = 0x18acc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18acc8: 0x24030001
    ctx->pc = 0x18acc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18accc: 0x34420a00
    ctx->pc = 0x18acccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2560));
label_18acd0:
    // 0x18acd0: 0xa4820000
    ctx->pc = 0x18acd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18acd4: 0x2463ffff
    ctx->pc = 0x18acd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18acd8: 0x24840002
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18acdc: 0x0
    ctx->pc = 0x18acdcu;
    // NOP
    // 0x18ace0: 0x0
    ctx->pc = 0x18ace0u;
    // NOP
    // 0x18ace4: 0x461fffa
    ctx->pc = 0x18ACE4u;
    {
        const bool branch_taken_0x18ace4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ace4) {
            ctx->pc = 0x18ACD0u;
            goto label_18acd0;
        }
    }
    ctx->pc = 0x18ACECu;
    // 0x18acec: 0xc0182d
    ctx->pc = 0x18acecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acf0: 0x28620008
    ctx->pc = 0x18acf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x18acf4: 0x1040ffe8
    ctx->pc = 0x18ACF4u;
    {
        const bool branch_taken_0x18acf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ACF8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18acf4) {
            ctx->pc = 0x18AC98u;
            goto label_18ac98;
        }
    }
    ctx->pc = 0x18ACFCu;
    // 0x18acfc: 0x24030007
    ctx->pc = 0x18acfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18ad00: 0x306200ff
    ctx->pc = 0x18ad00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18ad04: 0x0
    ctx->pc = 0x18ad04u;
    // NOP
label_18ad08:
    // 0x18ad08: 0x2466ffff
    ctx->pc = 0x18ad08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad0c: 0x32823
    ctx->pc = 0x18ad0cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18ad10: 0x34420800
    ctx->pc = 0x18ad10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
    // 0x18ad14: 0x24030007
    ctx->pc = 0x18ad14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_18ad18:
    // 0x18ad18: 0xa4820000
    ctx->pc = 0x18ad18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ad1c: 0x2463ffff
    ctx->pc = 0x18ad1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad20: 0x24840002
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ad24: 0x0
    ctx->pc = 0x18ad24u;
    // NOP
    // 0x18ad28: 0x0
    ctx->pc = 0x18ad28u;
    // NOP
    // 0x18ad2c: 0x461fffa
    ctx->pc = 0x18AD2Cu;
    {
        const bool branch_taken_0x18ad2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ad2c) {
            ctx->pc = 0x18AD18u;
            goto label_18ad18;
        }
    }
    ctx->pc = 0x18AD34u;
    // 0x18ad34: 0x30a200ff
    ctx->pc = 0x18ad34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18ad38: 0x24030007
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18ad3c: 0x34420800
    ctx->pc = 0x18ad3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_18ad40:
    // 0x18ad40: 0xa4820000
    ctx->pc = 0x18ad40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ad44: 0x2463ffff
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad48: 0x24840002
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ad4c: 0x0
    ctx->pc = 0x18ad4cu;
    // NOP
    // 0x18ad50: 0x0
    ctx->pc = 0x18ad50u;
    // NOP
    // 0x18ad54: 0x461fffa
    ctx->pc = 0x18AD54u;
    {
        const bool branch_taken_0x18ad54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ad54) {
            ctx->pc = 0x18AD40u;
            goto label_18ad40;
        }
    }
    ctx->pc = 0x18AD5Cu;
    // 0x18ad5c: 0xc0182d
    ctx->pc = 0x18ad5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad60: 0x28620005
    ctx->pc = 0x18ad60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5));
    // 0x18ad64: 0x1040ffe8
    ctx->pc = 0x18AD64u;
    {
        const bool branch_taken_0x18ad64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18AD68u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18ad64) {
            ctx->pc = 0x18AD08u;
            goto label_18ad08;
        }
    }
    ctx->pc = 0x18AD6Cu;
    // 0x18ad6c: 0x24030004
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ad70: 0x306200ff
    ctx->pc = 0x18ad70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18ad74: 0x0
    ctx->pc = 0x18ad74u;
    // NOP
label_18ad78:
    // 0x18ad78: 0x2466ffff
    ctx->pc = 0x18ad78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad7c: 0x32823
    ctx->pc = 0x18ad7cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18ad80: 0x34420700
    ctx->pc = 0x18ad80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1792));
    // 0x18ad84: 0x2403000f
    ctx->pc = 0x18ad84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
label_18ad88:
    // 0x18ad88: 0xa4820000
    ctx->pc = 0x18ad88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ad8c: 0x2463ffff
    ctx->pc = 0x18ad8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad90: 0x24840002
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ad94: 0x0
    ctx->pc = 0x18ad94u;
    // NOP
    // 0x18ad98: 0x0
    ctx->pc = 0x18ad98u;
    // NOP
    // 0x18ad9c: 0x461fffa
    ctx->pc = 0x18AD9Cu;
    {
        const bool branch_taken_0x18ad9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ad9c) {
            ctx->pc = 0x18AD88u;
            goto label_18ad88;
        }
    }
    ctx->pc = 0x18ADA4u;
    // 0x18ada4: 0x30a200ff
    ctx->pc = 0x18ada4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18ada8: 0x2403000f
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18adac: 0x34420700
    ctx->pc = 0x18adacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1792));
label_18adb0:
    // 0x18adb0: 0xa4820000
    ctx->pc = 0x18adb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18adb4: 0x2463ffff
    ctx->pc = 0x18adb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18adb8: 0x24840002
    ctx->pc = 0x18adb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18adbc: 0x0
    ctx->pc = 0x18adbcu;
    // NOP
    // 0x18adc0: 0x0
    ctx->pc = 0x18adc0u;
    // NOP
    // 0x18adc4: 0x461fffa
    ctx->pc = 0x18ADC4u;
    {
        const bool branch_taken_0x18adc4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18adc4) {
            ctx->pc = 0x18ADB0u;
            goto label_18adb0;
        }
    }
    ctx->pc = 0x18ADCCu;
    // 0x18adcc: 0xc0182d
    ctx->pc = 0x18adccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18add0: 0x28620004
    ctx->pc = 0x18add0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x18add4: 0x1040ffe8
    ctx->pc = 0x18ADD4u;
    {
        const bool branch_taken_0x18add4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ADD8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18add4) {
            ctx->pc = 0x18AD78u;
            goto label_18ad78;
        }
    }
    ctx->pc = 0x18ADDCu;
    // 0x18addc: 0x3c020024
    ctx->pc = 0x18addcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18ade0: 0x2403007f
    ctx->pc = 0x18ade0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x18ade4: 0x24442138
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8504));
    // 0x18ade8: 0x24020001
    ctx->pc = 0x18ade8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18adec: 0x0
    ctx->pc = 0x18adecu;
    // NOP
label_18adf0:
    // 0x18adf0: 0xa4830000
    ctx->pc = 0x18adf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18adf4: 0x2442ffff
    ctx->pc = 0x18adf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18adf8: 0x24840002
    ctx->pc = 0x18adf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18adfc: 0x0
    ctx->pc = 0x18adfcu;
    // NOP
    // 0x18ae00: 0x0
    ctx->pc = 0x18ae00u;
    // NOP
    // 0x18ae04: 0x441fffa
    ctx->pc = 0x18AE04u;
    {
        const bool branch_taken_0x18ae04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18ae04) {
            ctx->pc = 0x18ADF0u;
            goto label_18adf0;
        }
    }
    ctx->pc = 0x18AE0Cu;
    // 0x18ae0c: 0x24030003
    ctx->pc = 0x18ae0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ae10: 0x306200ff
    ctx->pc = 0x18ae10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18ae14: 0x0
    ctx->pc = 0x18ae14u;
    // NOP
label_18ae18:
    // 0x18ae18: 0x2466ffff
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ae1c: 0x32823
    ctx->pc = 0x18ae1cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18ae20: 0x34420500
    ctx->pc = 0x18ae20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1280));
    // 0x18ae24: 0x182d
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ae28:
    // 0x18ae28: 0xa4820000
    ctx->pc = 0x18ae28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ae2c: 0x2463ffff
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ae30: 0x24840002
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ae34: 0x0
    ctx->pc = 0x18ae34u;
    // NOP
    // 0x18ae38: 0x0
    ctx->pc = 0x18ae38u;
    // NOP
    // 0x18ae3c: 0x461fffa
    ctx->pc = 0x18AE3Cu;
    {
        const bool branch_taken_0x18ae3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ae3c) {
            ctx->pc = 0x18AE28u;
            goto label_18ae28;
        }
    }
    ctx->pc = 0x18AE44u;
    // 0x18ae44: 0x30a200ff
    ctx->pc = 0x18ae44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18ae48: 0x182d
    ctx->pc = 0x18ae48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae4c: 0x34420500
    ctx->pc = 0x18ae4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1280));
label_18ae50:
    // 0x18ae50: 0xa4820000
    ctx->pc = 0x18ae50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ae54: 0x2463ffff
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ae58: 0x24840002
    ctx->pc = 0x18ae58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18ae5c: 0x0
    ctx->pc = 0x18ae5cu;
    // NOP
    // 0x18ae60: 0x0
    ctx->pc = 0x18ae60u;
    // NOP
    // 0x18ae64: 0x461fffa
    ctx->pc = 0x18AE64u;
    {
        const bool branch_taken_0x18ae64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ae64) {
            ctx->pc = 0x18AE50u;
            goto label_18ae50;
        }
    }
    ctx->pc = 0x18AE6Cu;
    // 0x18ae6c: 0xc0182d
    ctx->pc = 0x18ae6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae70: 0x28620003
    ctx->pc = 0x18ae70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x18ae74: 0x1040ffe8
    ctx->pc = 0x18AE74u;
    {
        const bool branch_taken_0x18ae74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18AE78u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18ae74) {
            ctx->pc = 0x18AE18u;
            goto label_18ae18;
        }
    }
    ctx->pc = 0x18AE7Cu;
    // 0x18ae7c: 0x24030002
    ctx->pc = 0x18ae7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae80: 0x306200ff
    ctx->pc = 0x18ae80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18ae84: 0x0
    ctx->pc = 0x18ae84u;
    // NOP
label_18ae88:
    // 0x18ae88: 0x2466ffff
    ctx->pc = 0x18ae88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ae8c: 0x32823
    ctx->pc = 0x18ae8cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18ae90: 0x34420400
    ctx->pc = 0x18ae90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
    // 0x18ae94: 0x24030001
    ctx->pc = 0x18ae94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_18ae98:
    // 0x18ae98: 0xa4820000
    ctx->pc = 0x18ae98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ae9c: 0x2463ffff
    ctx->pc = 0x18ae9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aea0: 0x24840002
    ctx->pc = 0x18aea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18aea4: 0x0
    ctx->pc = 0x18aea4u;
    // NOP
    // 0x18aea8: 0x0
    ctx->pc = 0x18aea8u;
    // NOP
    // 0x18aeac: 0x461fffa
    ctx->pc = 0x18AEACu;
    {
        const bool branch_taken_0x18aeac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aeac) {
            ctx->pc = 0x18AE98u;
            goto label_18ae98;
        }
    }
    ctx->pc = 0x18AEB4u;
    // 0x18aeb4: 0x30a200ff
    ctx->pc = 0x18aeb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18aeb8: 0x24030001
    ctx->pc = 0x18aeb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aebc: 0x34420400
    ctx->pc = 0x18aebcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
label_18aec0:
    // 0x18aec0: 0xa4820000
    ctx->pc = 0x18aec0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18aec4: 0x2463ffff
    ctx->pc = 0x18aec4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aec8: 0x24840002
    ctx->pc = 0x18aec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18aecc: 0x0
    ctx->pc = 0x18aeccu;
    // NOP
    // 0x18aed0: 0x0
    ctx->pc = 0x18aed0u;
    // NOP
    // 0x18aed4: 0x461fffa
    ctx->pc = 0x18AED4u;
    {
        const bool branch_taken_0x18aed4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18aed4) {
            ctx->pc = 0x18AEC0u;
            goto label_18aec0;
        }
    }
    ctx->pc = 0x18AEDCu;
    // 0x18aedc: 0xc0182d
    ctx->pc = 0x18aedcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aee0: 0x28620002
    ctx->pc = 0x18aee0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x18aee4: 0x1040ffe8
    ctx->pc = 0x18AEE4u;
    {
        const bool branch_taken_0x18aee4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18AEE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18aee4) {
            ctx->pc = 0x18AE88u;
            goto label_18ae88;
        }
    }
    ctx->pc = 0x18AEECu;
    // 0x18aeec: 0x24030001
    ctx->pc = 0x18aeecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aef0: 0x306200ff
    ctx->pc = 0x18aef0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x18aef4: 0x0
    ctx->pc = 0x18aef4u;
    // NOP
label_18aef8:
    // 0x18aef8: 0x2466ffff
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18aefc: 0x32823
    ctx->pc = 0x18aefcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18af00: 0x34420300
    ctx->pc = 0x18af00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 768));
    // 0x18af04: 0x24030003
    ctx->pc = 0x18af04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_18af08:
    // 0x18af08: 0xa4820000
    ctx->pc = 0x18af08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18af0c: 0x2463ffff
    ctx->pc = 0x18af0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18af10: 0x24840002
    ctx->pc = 0x18af10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18af14: 0x0
    ctx->pc = 0x18af14u;
    // NOP
    // 0x18af18: 0x0
    ctx->pc = 0x18af18u;
    // NOP
    // 0x18af1c: 0x461fffa
    ctx->pc = 0x18AF1Cu;
    {
        const bool branch_taken_0x18af1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18af1c) {
            ctx->pc = 0x18AF08u;
            goto label_18af08;
        }
    }
    ctx->pc = 0x18AF24u;
    // 0x18af24: 0x30a200ff
    ctx->pc = 0x18af24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x18af28: 0x24030003
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18af2c: 0x34420300
    ctx->pc = 0x18af2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 768));
label_18af30:
    // 0x18af30: 0xa4820000
    ctx->pc = 0x18af30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18af34: 0x2463ffff
    ctx->pc = 0x18af34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18af38: 0x24840002
    ctx->pc = 0x18af38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18af3c: 0x0
    ctx->pc = 0x18af3cu;
    // NOP
    // 0x18af40: 0x0
    ctx->pc = 0x18af40u;
    // NOP
    // 0x18af44: 0x461fffa
    ctx->pc = 0x18AF44u;
    {
        const bool branch_taken_0x18af44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18af44) {
            ctx->pc = 0x18AF30u;
            goto label_18af30;
        }
    }
    ctx->pc = 0x18AF4Cu;
    // 0x18af4c: 0xc0182d
    ctx->pc = 0x18af4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af50: 0x1c60ffe9
    ctx->pc = 0x18AF50u;
    {
        const bool branch_taken_0x18af50 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x18AF54u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18af50) {
            ctx->pc = 0x18AEF8u;
            goto label_18aef8;
        }
    }
    ctx->pc = 0x18AF58u;
    // 0x18af58: 0x182d
    ctx->pc = 0x18af58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af5c: 0x306200ff
    ctx->pc = 0x18af5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
label_18af60:
    // 0x18af60: 0x2465ffff
    ctx->pc = 0x18af60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18af64: 0x34420100
    ctx->pc = 0x18af64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x18af68: 0x2403000f
    ctx->pc = 0x18af68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18af6c: 0x0
    ctx->pc = 0x18af6cu;
    // NOP
label_18af70:
    // 0x18af70: 0xa4820000
    ctx->pc = 0x18af70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18af74: 0x2463ffff
    ctx->pc = 0x18af74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18af78: 0x24840002
    ctx->pc = 0x18af78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18af7c: 0x0
    ctx->pc = 0x18af7cu;
    // NOP
    // 0x18af80: 0x0
    ctx->pc = 0x18af80u;
    // NOP
    // 0x18af84: 0x461fffa
    ctx->pc = 0x18AF84u;
    {
        const bool branch_taken_0x18af84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18af84) {
            ctx->pc = 0x18AF70u;
            goto label_18af70;
        }
    }
    ctx->pc = 0x18AF8Cu;
    // 0x18af8c: 0xa0182d
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af90: 0x461fff3
    ctx->pc = 0x18AF90u;
    {
        const bool branch_taken_0x18af90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18AF94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x18af90) {
            ctx->pc = 0x18AF60u;
            goto label_18af60;
        }
    }
    ctx->pc = 0x18AF98u;
    // 0x18af98: 0x3e00008
    ctx->pc = 0x18AF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AC00u: goto label_18ac00;
            case 0x18AC28u: goto label_18ac28;
            case 0x18AC38u: goto label_18ac38;
            case 0x18AC60u: goto label_18ac60;
            case 0x18AC98u: goto label_18ac98;
            case 0x18ACA8u: goto label_18aca8;
            case 0x18ACD0u: goto label_18acd0;
            case 0x18AD08u: goto label_18ad08;
            case 0x18AD18u: goto label_18ad18;
            case 0x18AD40u: goto label_18ad40;
            case 0x18AD78u: goto label_18ad78;
            case 0x18AD88u: goto label_18ad88;
            case 0x18ADB0u: goto label_18adb0;
            case 0x18ADF0u: goto label_18adf0;
            case 0x18AE18u: goto label_18ae18;
            case 0x18AE28u: goto label_18ae28;
            case 0x18AE50u: goto label_18ae50;
            case 0x18AE88u: goto label_18ae88;
            case 0x18AE98u: goto label_18ae98;
            case 0x18AEC0u: goto label_18aec0;
            case 0x18AEF8u: goto label_18aef8;
            case 0x18AF08u: goto label_18af08;
            case 0x18AF30u: goto label_18af30;
            case 0x18AF60u: goto label_18af60;
            case 0x18AF70u: goto label_18af70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AFA0u;
}
