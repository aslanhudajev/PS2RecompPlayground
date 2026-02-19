#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBClearTexscroll
// Address: 0x2d0ad0 - 0x2d0b6c
void MBClearTexscroll_0x2d0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0ad0u;

    // 0x2d0ad0: 0x3c020036
    ctx->pc = 0x2d0ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d0ad4: 0x8c48dee0
    ctx->pc = 0x2d0ad4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d0ad8: 0x8d020038
    ctx->pc = 0x2d0ad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x2d0adc: 0x40182d
    ctx->pc = 0x2d0adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ae0: 0x8c420000
    ctx->pc = 0x2d0ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0ae4: 0x1840001f
    ctx->pc = 0x2D0AE4u;
    {
        const bool branch_taken_0x2d0ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D0AE8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ae4) {
            ctx->pc = 0x2D0B64u;
            goto label_2d0b64;
        }
    }
    ctx->pc = 0x2D0AECu;
    // 0x2d0aec: 0x71100
    ctx->pc = 0x2d0aecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
label_2d0af0:
    // 0x2d0af0: 0x24420004
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d0af4: 0x433021
    ctx->pc = 0x2d0af4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0af8: 0x8cc2000c
    ctx->pc = 0x2d0af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d0afc: 0x54400014
    ctx->pc = 0x2D0AFCu;
    {
        const bool branch_taken_0x2d0afc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d0afc) {
            ctx->pc = 0x2D0B00u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x2D0B50u;
            goto label_2d0b50;
        }
    }
    ctx->pc = 0x2D0B04u;
    // 0x2d0b04: 0x8cc20000
    ctx->pc = 0x2d0b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d0b08: 0x40202d
    ctx->pc = 0x2d0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b0c: 0x8c420048
    ctx->pc = 0x2d0b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2d0b10: 0x1040000e
    ctx->pc = 0x2D0B10u;
    {
        const bool branch_taken_0x2d0b10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0B14u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b10) {
            ctx->pc = 0x2D0B4Cu;
            goto label_2d0b4c;
        }
    }
    ctx->pc = 0x2D0B18u;
    // 0x2d0b18: 0x51980
    ctx->pc = 0x2d0b18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d0b1c: 0x0
    ctx->pc = 0x2d0b1cu;
    // NOP
label_2d0b20:
    // 0x2d0b20: 0x8c820058
    ctx->pc = 0x2d0b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d0b24: 0x621821
    ctx->pc = 0x2d0b24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0b28: 0x94620008
    ctx->pc = 0x2d0b28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d0b2c: 0x3042ffbf
    ctx->pc = 0x2d0b2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65471));
    // 0x2d0b30: 0xa4620008
    ctx->pc = 0x2d0b30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d0b34: 0x24a50001
    ctx->pc = 0x2d0b34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d0b38: 0x8cc40000
    ctx->pc = 0x2d0b38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d0b3c: 0x8c820048
    ctx->pc = 0x2d0b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d0b40: 0xa2102b
    ctx->pc = 0x2d0b40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d0b44: 0x1440fff6
    ctx->pc = 0x2D0B44u;
    {
        const bool branch_taken_0x2d0b44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0B48u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
        if (branch_taken_0x2d0b44) {
            ctx->pc = 0x2D0B20u;
            goto label_2d0b20;
        }
    }
    ctx->pc = 0x2D0B4Cu;
label_2d0b4c:
    // 0x2d0b4c: 0x24e70001
    ctx->pc = 0x2d0b4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_2d0b50:
    // 0x2d0b50: 0x8d030038
    ctx->pc = 0x2d0b50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x2d0b54: 0x8c620000
    ctx->pc = 0x2d0b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0b58: 0xe2102a
    ctx->pc = 0x2d0b58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x2d0b5c: 0x1440ffe4
    ctx->pc = 0x2D0B5Cu;
    {
        const bool branch_taken_0x2d0b5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0B60u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x2d0b5c) {
            ctx->pc = 0x2D0AF0u;
            goto label_2d0af0;
        }
    }
    ctx->pc = 0x2D0B64u;
label_2d0b64:
    // 0x2d0b64: 0x3e00008
    ctx->pc = 0x2D0B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0AF0u: goto label_2d0af0;
            case 0x2D0B20u: goto label_2d0b20;
            case 0x2D0B4Cu: goto label_2d0b4c;
            case 0x2D0B50u: goto label_2d0b50;
            case 0x2D0B64u: goto label_2d0b64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0B6Cu;
}
