#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setPrimInfo
// Address: 0x2bf0f0 - 0x2bf1b8
void setPrimInfo_0x2bf0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bf0f0u;

    // 0x2bf0f0: 0x3c020036
    ctx->pc = 0x2bf0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bf0f4: 0x8c43dee0
    ctx->pc = 0x2bf0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bf0f8: 0x30c20080
    ctx->pc = 0x2bf0f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 128));
    // 0x2bf0fc: 0x10400014
    ctx->pc = 0x2BF0FCu;
    {
        const bool branch_taken_0x2bf0fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF100u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0fc) {
            ctx->pc = 0x2BF150u;
            goto label_2bf150;
        }
    }
    ctx->pc = 0x2BF104u;
    // 0x2bf104: 0x8c620008
    ctx->pc = 0x2bf104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bf108: 0x9c430030
    ctx->pc = 0x2bf108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bf10c: 0x30a20080
    ctx->pc = 0x2bf10cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 128));
    // 0x2bf110: 0x50400005
    ctx->pc = 0x2BF110u;
    {
        const bool branch_taken_0x2bf110 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bf110) {
            ctx->pc = 0x2BF114u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 176)));
            ctx->pc = 0x2BF128u;
            goto label_2bf128;
        }
    }
    ctx->pc = 0x2BF118u;
    // 0x2bf118: 0x34028000
    ctx->pc = 0x2bf118u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2bf11c: 0x21478
    ctx->pc = 0x2bf11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2bf120: 0x621825
    ctx->pc = 0x2bf120u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf124: 0x8ce200b0
    ctx->pc = 0x2bf124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_2bf128:
    // 0x2bf128: 0x210c0
    ctx->pc = 0x2bf128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bf12c: 0xe21021
    ctx->pc = 0x2bf12cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bf130: 0xfc430080
    ctx->pc = 0x2bf130u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 3));
    // 0x2bf134: 0x8ce200b0
    ctx->pc = 0x2bf134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x2bf138: 0xe21021
    ctx->pc = 0x2bf138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bf13c: 0x2403004e
    ctx->pc = 0x2bf13cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 78));
    // 0x2bf140: 0xa04300a8
    ctx->pc = 0x2bf140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf144: 0x8ce200b0
    ctx->pc = 0x2bf144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x2bf148: 0x24420001
    ctx->pc = 0x2bf148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf14c: 0xace200b0
    ctx->pc = 0x2bf14cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 2));
label_2bf150:
    // 0x2bf150: 0x30c20040
    ctx->pc = 0x2bf150u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 64));
    // 0x2bf154: 0x10400009
    ctx->pc = 0x2BF154u;
    {
        const bool branch_taken_0x2bf154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF158u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 64));
        if (branch_taken_0x2bf154) {
            ctx->pc = 0x2BF17Cu;
            goto label_2bf17c;
        }
    }
    ctx->pc = 0x2BF15Cu;
    // 0x2bf15c: 0x3c020005
    ctx->pc = 0x2bf15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2bf160: 0x3442001d
    ctx->pc = 0x2bf160u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29));
    // 0x2bf164: 0x3c030003
    ctx->pc = 0x2bf164u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
    // 0x2bf168: 0x3463001d
    ctx->pc = 0x2bf168u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 29));
    // 0x2bf16c: 0x64100b
    ctx->pc = 0x2bf16cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2bf170: 0xace20040
    ctx->pc = 0x2bf170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
    // 0x2bf174: 0x24020004
    ctx->pc = 0x2bf174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bf178: 0xace200b4
    ctx->pc = 0x2bf178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 2));
label_2bf17c:
    // 0x2bf17c: 0x8ce20074
    ctx->pc = 0x2bf17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x2bf180: 0x30420002
    ctx->pc = 0x2bf180u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2bf184: 0x1440000a
    ctx->pc = 0x2BF184u;
    {
        const bool branch_taken_0x2bf184 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BF188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x2bf184) {
            ctx->pc = 0x2BF1B0u;
            goto label_2bf1b0;
        }
    }
    ctx->pc = 0x2BF18Cu;
    // 0x2bf18c: 0xa21024
    ctx->pc = 0x2bf18cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bf190: 0x24060044
    ctx->pc = 0x2bf190u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2bf194: 0x24030048
    ctx->pc = 0x2bf194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 72));
    // 0x2bf198: 0x62300b
    ctx->pc = 0x2bf198u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x2bf19c: 0xdce20030
    ctx->pc = 0x2bf19cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2bf1a0: 0x10460003
    ctx->pc = 0x2BF1A0u;
    {
        const bool branch_taken_0x2bf1a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x2BF1A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2bf1a0) {
            ctx->pc = 0x2BF1B0u;
            goto label_2bf1b0;
        }
    }
    ctx->pc = 0x2BF1A8u;
    // 0x2bf1a8: 0xfce60030
    ctx->pc = 0x2bf1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 6));
    // 0x2bf1ac: 0xace200b4
    ctx->pc = 0x2bf1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 2));
label_2bf1b0:
    // 0x2bf1b0: 0x3e00008
    ctx->pc = 0x2BF1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BF128u: goto label_2bf128;
            case 0x2BF150u: goto label_2bf150;
            case 0x2BF17Cu: goto label_2bf17c;
            case 0x2BF1B0u: goto label_2bf1b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BF1B8u;
}
