#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitDcSizC
// Address: 0x18bb80 - 0x18bcf4
void mpvvlc_InitDcSizC_0x18bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitDcSizC");


    ctx->pc = 0x18bb80u;

    // 0x18bb80: 0x3c020024
    ctx->pc = 0x18bb80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18bb84: 0x24040002
    ctx->pc = 0x18bb84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bb88: 0x244225f8
    ctx->pc = 0x18bb88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9720));
    // 0x18bb8c: 0x2403001f
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_18bb90:
    // 0x18bb90: 0xa0440000
    ctx->pc = 0x18bb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bb94: 0x2463ffff
    ctx->pc = 0x18bb94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bb98: 0x24420001
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bb9c: 0x0
    ctx->pc = 0x18bb9cu;
    // NOP
    // 0x18bba0: 0x0
    ctx->pc = 0x18bba0u;
    // NOP
    // 0x18bba4: 0x461fffa
    ctx->pc = 0x18BBA4u;
    {
        const bool branch_taken_0x18bba4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bba4) {
            ctx->pc = 0x18BB90u;
            goto label_18bb90;
        }
    }
    ctx->pc = 0x18BBACu;
    // 0x18bbac: 0x24040012
    ctx->pc = 0x18bbacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x18bbb0: 0x2403001f
    ctx->pc = 0x18bbb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18bbb4: 0x0
    ctx->pc = 0x18bbb4u;
    // NOP
label_18bbb8:
    // 0x18bbb8: 0xa0440000
    ctx->pc = 0x18bbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bbbc: 0x2463ffff
    ctx->pc = 0x18bbbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bbc0: 0x24420001
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bbc4: 0x0
    ctx->pc = 0x18bbc4u;
    // NOP
    // 0x18bbc8: 0x0
    ctx->pc = 0x18bbc8u;
    // NOP
    // 0x18bbcc: 0x461fffa
    ctx->pc = 0x18BBCCu;
    {
        const bool branch_taken_0x18bbcc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bbcc) {
            ctx->pc = 0x18BBB8u;
            goto label_18bbb8;
        }
    }
    ctx->pc = 0x18BBD4u;
    // 0x18bbd4: 0x24040022
    ctx->pc = 0x18bbd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    // 0x18bbd8: 0x2403001f
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18bbdc: 0x0
    ctx->pc = 0x18bbdcu;
    // NOP
label_18bbe0:
    // 0x18bbe0: 0xa0440000
    ctx->pc = 0x18bbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bbe4: 0x2463ffff
    ctx->pc = 0x18bbe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bbe8: 0x24420001
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bbec: 0x0
    ctx->pc = 0x18bbecu;
    // NOP
    // 0x18bbf0: 0x0
    ctx->pc = 0x18bbf0u;
    // NOP
    // 0x18bbf4: 0x461fffa
    ctx->pc = 0x18BBF4u;
    {
        const bool branch_taken_0x18bbf4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bbf4) {
            ctx->pc = 0x18BBE0u;
            goto label_18bbe0;
        }
    }
    ctx->pc = 0x18BBFCu;
    // 0x18bbfc: 0x24040033
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 51));
    // 0x18bc00: 0x2403000f
    ctx->pc = 0x18bc00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18bc04: 0x0
    ctx->pc = 0x18bc04u;
    // NOP
label_18bc08:
    // 0x18bc08: 0xa0440000
    ctx->pc = 0x18bc08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bc0c: 0x2463ffff
    ctx->pc = 0x18bc0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bc10: 0x24420001
    ctx->pc = 0x18bc10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bc14: 0x0
    ctx->pc = 0x18bc14u;
    // NOP
    // 0x18bc18: 0x0
    ctx->pc = 0x18bc18u;
    // NOP
    // 0x18bc1c: 0x461fffa
    ctx->pc = 0x18BC1Cu;
    {
        const bool branch_taken_0x18bc1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bc1c) {
            ctx->pc = 0x18BC08u;
            goto label_18bc08;
        }
    }
    ctx->pc = 0x18BC24u;
    // 0x18bc24: 0x24040044
    ctx->pc = 0x18bc24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 68));
    // 0x18bc28: 0x24030007
    ctx->pc = 0x18bc28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bc2c: 0x0
    ctx->pc = 0x18bc2cu;
    // NOP
label_18bc30:
    // 0x18bc30: 0xa0440000
    ctx->pc = 0x18bc30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bc34: 0x2463ffff
    ctx->pc = 0x18bc34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bc38: 0x24420001
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bc3c: 0x0
    ctx->pc = 0x18bc3cu;
    // NOP
    // 0x18bc40: 0x0
    ctx->pc = 0x18bc40u;
    // NOP
    // 0x18bc44: 0x461fffa
    ctx->pc = 0x18BC44u;
    {
        const bool branch_taken_0x18bc44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bc44) {
            ctx->pc = 0x18BC30u;
            goto label_18bc30;
        }
    }
    ctx->pc = 0x18BC4Cu;
    // 0x18bc4c: 0x24040055
    ctx->pc = 0x18bc4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 85));
    // 0x18bc50: 0x24030003
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bc54: 0x0
    ctx->pc = 0x18bc54u;
    // NOP
label_18bc58:
    // 0x18bc58: 0xa0440000
    ctx->pc = 0x18bc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bc5c: 0x2463ffff
    ctx->pc = 0x18bc5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bc60: 0x24420001
    ctx->pc = 0x18bc60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bc64: 0x0
    ctx->pc = 0x18bc64u;
    // NOP
    // 0x18bc68: 0x0
    ctx->pc = 0x18bc68u;
    // NOP
    // 0x18bc6c: 0x461fffa
    ctx->pc = 0x18BC6Cu;
    {
        const bool branch_taken_0x18bc6c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bc6c) {
            ctx->pc = 0x18BC58u;
            goto label_18bc58;
        }
    }
    ctx->pc = 0x18BC74u;
    // 0x18bc74: 0x24040066
    ctx->pc = 0x18bc74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    // 0x18bc78: 0x24030001
    ctx->pc = 0x18bc78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bc7c: 0x0
    ctx->pc = 0x18bc7cu;
    // NOP
label_18bc80:
    // 0x18bc80: 0xa0440000
    ctx->pc = 0x18bc80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bc84: 0x2463ffff
    ctx->pc = 0x18bc84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bc88: 0x24420001
    ctx->pc = 0x18bc88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bc8c: 0x0
    ctx->pc = 0x18bc8cu;
    // NOP
    // 0x18bc90: 0x0
    ctx->pc = 0x18bc90u;
    // NOP
    // 0x18bc94: 0x461fffa
    ctx->pc = 0x18BC94u;
    {
        const bool branch_taken_0x18bc94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bc94) {
            ctx->pc = 0x18BC80u;
            goto label_18bc80;
        }
    }
    ctx->pc = 0x18BC9Cu;
    // 0x18bc9c: 0x24040077
    ctx->pc = 0x18bc9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 119));
    // 0x18bca0: 0x182d
    ctx->pc = 0x18bca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bca4: 0x0
    ctx->pc = 0x18bca4u;
    // NOP
label_18bca8:
    // 0x18bca8: 0xa0440000
    ctx->pc = 0x18bca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bcac: 0x2463ffff
    ctx->pc = 0x18bcacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bcb0: 0x24420001
    ctx->pc = 0x18bcb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bcb4: 0x0
    ctx->pc = 0x18bcb4u;
    // NOP
    // 0x18bcb8: 0x0
    ctx->pc = 0x18bcb8u;
    // NOP
    // 0x18bcbc: 0x461fffa
    ctx->pc = 0x18BCBCu;
    {
        const bool branch_taken_0x18bcbc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bcbc) {
            ctx->pc = 0x18BCA8u;
            goto label_18bca8;
        }
    }
    ctx->pc = 0x18BCC4u;
    // 0x18bcc4: 0x24040088
    ctx->pc = 0x18bcc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 136));
    // 0x18bcc8: 0x182d
    ctx->pc = 0x18bcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bccc: 0x0
    ctx->pc = 0x18bcccu;
    // NOP
label_18bcd0:
    // 0x18bcd0: 0xa0440000
    ctx->pc = 0x18bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bcd4: 0x2463ffff
    ctx->pc = 0x18bcd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bcd8: 0x24420001
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bcdc: 0x0
    ctx->pc = 0x18bcdcu;
    // NOP
    // 0x18bce0: 0x0
    ctx->pc = 0x18bce0u;
    // NOP
    // 0x18bce4: 0x461fffa
    ctx->pc = 0x18BCE4u;
    {
        const bool branch_taken_0x18bce4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bce4) {
            ctx->pc = 0x18BCD0u;
            goto label_18bcd0;
        }
    }
    ctx->pc = 0x18BCECu;
    // 0x18bcec: 0x3e00008
    ctx->pc = 0x18BCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BB90u: goto label_18bb90;
            case 0x18BBB8u: goto label_18bbb8;
            case 0x18BBE0u: goto label_18bbe0;
            case 0x18BC08u: goto label_18bc08;
            case 0x18BC30u: goto label_18bc30;
            case 0x18BC58u: goto label_18bc58;
            case 0x18BC80u: goto label_18bc80;
            case 0x18BCA8u: goto label_18bca8;
            case 0x18BCD0u: goto label_18bcd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BCF4u;
}
