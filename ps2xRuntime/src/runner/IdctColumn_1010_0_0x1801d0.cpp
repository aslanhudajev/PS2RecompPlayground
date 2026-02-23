#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_1010_0
// Address: 0x1801d0 - 0x180248
void IdctColumn_1010_0_0x1801d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_1010_0");


    ctx->pc = 0x1801d0u;

    // 0x1801d0: 0x80282d
    ctx->pc = 0x1801d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801d4: 0x24080008
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1801d8: 0x10000002
    ctx->pc = 0x1801D8u;
    {
        const bool branch_taken_0x1801d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1801DCu;
        SET_GPR_U32(ctx, 7, ((uint32_t)32 << 16));
        if (branch_taken_0x1801d8) {
            ctx->pc = 0x1801E4u;
            goto label_1801e4;
        }
    }
    ctx->pc = 0x1801E0u;
label_1801e0:
    // 0x1801e0: 0x24a50002
    ctx->pc = 0x1801e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_1801e4:
    // 0x1801e4: 0x84a30000
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1801e8: 0x2508ffff
    ctx->pc = 0x1801e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1801ec: 0x84a20040
    ctx->pc = 0x1801ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1801f0: 0x31c00
    ctx->pc = 0x1801f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1801f4: 0x21400
    ctx->pc = 0x1801f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1801f8: 0x623023
    ctx->pc = 0x1801f8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1801fc: 0x621821
    ctx->pc = 0x1801fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180200: 0xc0102d
    ctx->pc = 0x180200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180204: 0x671821
    ctx->pc = 0x180204u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180208: 0x472021
    ctx->pc = 0x180208u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18020c: 0x31d83
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x180210: 0x80102d
    ctx->pc = 0x180210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180214: 0xa4a30040
    ctx->pc = 0x180214u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x180218: 0x23583
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 22));
    // 0x18021c: 0xa4a30000
    ctx->pc = 0x18021cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x180220: 0x41583
    ctx->pc = 0x180220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 22));
    // 0x180224: 0xa4a60060
    ctx->pc = 0x180224u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 6));
    // 0x180228: 0xa4a20050
    ctx->pc = 0x180228u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x18022c: 0xa4a30070
    ctx->pc = 0x18022cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x180230: 0xa4a60010
    ctx->pc = 0x180230u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x180234: 0xa4a20020
    ctx->pc = 0x180234u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x180238: 0x1500ffe9
    ctx->pc = 0x180238u;
    {
        const bool branch_taken_0x180238 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x18023Cu;
        WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x180238) {
            ctx->pc = 0x1801E0u;
            goto label_1801e0;
        }
    }
    ctx->pc = 0x180240u;
    // 0x180240: 0x3e00008
    ctx->pc = 0x180240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1801E0u: goto label_1801e0;
            case 0x1801E4u: goto label_1801e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180248u;
}
