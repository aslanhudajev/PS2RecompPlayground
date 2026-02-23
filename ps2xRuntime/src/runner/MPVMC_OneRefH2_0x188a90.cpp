#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVMC_OneRefH2
// Address: 0x188a90 - 0x188b94
void MPVMC_OneRefH2_0x188a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVMC_OneRefH2");


    ctx->pc = 0x188a90u;

    // 0x188a90: 0x8c830014
    ctx->pc = 0x188a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x188a94: 0x240a0007
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 7));
    // 0x188a98: 0x8c820010
    ctx->pc = 0x188a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188a9c: 0x8c870008
    ctx->pc = 0x188a9cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x188aa0: 0x24660001
    ctx->pc = 0x188aa0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 1));
    // 0x188aa4: 0x2449fff8
    ctx->pc = 0x188aa4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x188aa8: 0x24680007
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 7));
    // 0x188aac: 0x0
    ctx->pc = 0x188aacu;
    // NOP
label_188ab0:
    // 0x188ab0: 0x90c30000
    ctx->pc = 0x188ab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x188ab4: 0x254affff
    ctx->pc = 0x188ab4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x188ab8: 0x9102fff9
    ctx->pc = 0x188ab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967289)));
    // 0x188abc: 0x80c40001
    ctx->pc = 0x188abcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x188ac0: 0x431021
    ctx->pc = 0x188ac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188ac4: 0x24420001
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x188ac8: 0x308400ff
    ctx->pc = 0x188ac8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188acc: 0x21043
    ctx->pc = 0x188accu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x188ad0: 0x641821
    ctx->pc = 0x188ad0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188ad4: 0xa0e20000
    ctx->pc = 0x188ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x188ad8: 0x24630001
    ctx->pc = 0x188ad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x188adc: 0x31843
    ctx->pc = 0x188adcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x188ae0: 0x80c20002
    ctx->pc = 0x188ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x188ae4: 0xa0e30001
    ctx->pc = 0x188ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x188ae8: 0x304200ff
    ctx->pc = 0x188ae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x188aec: 0x80c50003
    ctx->pc = 0x188aecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x188af0: 0x822021
    ctx->pc = 0x188af0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x188af4: 0x24840001
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x188af8: 0x30a500ff
    ctx->pc = 0x188af8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x188afc: 0x42043
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x188b00: 0xa0e40002
    ctx->pc = 0x188b00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x188b04: 0x451021
    ctx->pc = 0x188b04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x188b08: 0x24420001
    ctx->pc = 0x188b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x188b0c: 0x80c30004
    ctx->pc = 0x188b0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x188b10: 0x21043
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x188b14: 0xa0e20003
    ctx->pc = 0x188b14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x188b18: 0x306300ff
    ctx->pc = 0x188b18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188b1c: 0x80c40005
    ctx->pc = 0x188b1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x188b20: 0xa32821
    ctx->pc = 0x188b20u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x188b24: 0x24a50001
    ctx->pc = 0x188b24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x188b28: 0x24c60008
    ctx->pc = 0x188b28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x188b2c: 0x308400ff
    ctx->pc = 0x188b2cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188b30: 0x52843
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x188b34: 0xa0e50004
    ctx->pc = 0x188b34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x188b38: 0x641821
    ctx->pc = 0x188b38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188b3c: 0x24630001
    ctx->pc = 0x188b3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x188b40: 0xc93021
    ctx->pc = 0x188b40u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x188b44: 0x81020000
    ctx->pc = 0x188b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188b48: 0x31843
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x188b4c: 0xa0e30005
    ctx->pc = 0x188b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x188b50: 0x25080008
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x188b54: 0x304200ff
    ctx->pc = 0x188b54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x188b58: 0x8103fff9
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967289)));
    // 0x188b5c: 0x822021
    ctx->pc = 0x188b5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x188b60: 0x24840001
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x188b64: 0x1094021
    ctx->pc = 0x188b64u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x188b68: 0x306300ff
    ctx->pc = 0x188b68u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188b6c: 0x42043
    ctx->pc = 0x188b6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x188b70: 0x431021
    ctx->pc = 0x188b70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188b74: 0xa0e40006
    ctx->pc = 0x188b74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x188b78: 0x24420001
    ctx->pc = 0x188b78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x188b7c: 0x21043
    ctx->pc = 0x188b7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x188b80: 0xa0e20007
    ctx->pc = 0x188b80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x188b84: 0x541ffca
    ctx->pc = 0x188B84u;
    {
        const bool branch_taken_0x188b84 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x188B88u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x188b84) {
            ctx->pc = 0x188AB0u;
            goto label_188ab0;
        }
    }
    ctx->pc = 0x188B8Cu;
    // 0x188b8c: 0x3e00008
    ctx->pc = 0x188B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188AB0u: goto label_188ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188B94u;
}
