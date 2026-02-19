#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbSwapBuffer
// Address: 0x2aae60 - 0x2aaf94
void ipbSwapBuffer_0x2aae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aae60u;

    // 0x2aae60: 0x27bdffd0
    ctx->pc = 0x2aae60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aae64: 0xffbf0020
    ctx->pc = 0x2aae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aae68: 0xffb10010
    ctx->pc = 0x2aae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aae6c: 0xffb00000
    ctx->pc = 0x2aae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aae70: 0x3c020036
    ctx->pc = 0x2aae70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aae74: 0x8c46dee0
    ctx->pc = 0x2aae74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aae78: 0x3c030037
    ctx->pc = 0x2aae78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2aae7c: 0x24020001
    ctx->pc = 0x2aae7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aae80: 0xac628268
    ctx->pc = 0x2aae80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935144), GPR_U32(ctx, 2));
    // 0x2aae84: 0x3c020037
    ctx->pc = 0x2aae84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aae88: 0x8c42826c
    ctx->pc = 0x2aae88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935148)));
    // 0x2aae8c: 0x14400004
    ctx->pc = 0x2AAE8Cu;
    {
        const bool branch_taken_0x2aae8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AAE90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aae8c) {
            ctx->pc = 0x2AAEA0u;
            goto label_2aaea0;
        }
    }
    ctx->pc = 0x2AAE94u;
    // 0x2aae94: 0xac608268
    ctx->pc = 0x2aae94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935144), GPR_U32(ctx, 0));
    // 0x2aae98: 0x1000003a
    ctx->pc = 0x2AAE98u;
    {
        const bool branch_taken_0x2aae98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AAE9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2aae98) {
            ctx->pc = 0x2AAF84u;
            goto label_2aaf84;
        }
    }
    ctx->pc = 0x2AAEA0u;
label_2aaea0:
    // 0x2aaea0: 0x8c428330
    ctx->pc = 0x2aaea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aaea4: 0xac440018
    ctx->pc = 0x2aaea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x2aaea8: 0x8cc50010
    ctx->pc = 0x2aaea8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2aaeac: 0x41a40
    ctx->pc = 0x2aaeacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 9));
    // 0x2aaeb0: 0x8ca2000c
    ctx->pc = 0x2aaeb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2aaeb4: 0x621021
    ctx->pc = 0x2aaeb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aaeb8: 0xacc20008
    ctx->pc = 0x2aaeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2aaebc: 0x3c020036
    ctx->pc = 0x2aaebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aaec0: 0x8c44deec
    ctx->pc = 0x2aaec0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958828)));
    // 0x2aaec4: 0x8ca2000c
    ctx->pc = 0x2aaec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2aaec8: 0x621821
    ctx->pc = 0x2aaec8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aaecc: 0xac830000
    ctx->pc = 0x2aaeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2aaed0: 0x8cd00008
    ctx->pc = 0x2aaed0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2aaed4: 0x3c031200
    ctx->pc = 0x2aaed4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x2aaed8: 0x34630020
    ctx->pc = 0x2aaed8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32));
    // 0x2aaedc: 0xde0201d0
    ctx->pc = 0x2aaedcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x2aaee0: 0xfc620000
    ctx->pc = 0x2aaee0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2aaee4: 0x3c031200
    ctx->pc = 0x2aaee4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x2aaee8: 0x34630070
    ctx->pc = 0x2aaee8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 112));
    // 0x2aaeec: 0xde0201e0
    ctx->pc = 0x2aaeecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x2aaef0: 0xfc620000
    ctx->pc = 0x2aaef0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2aaef4: 0x3c031200
    ctx->pc = 0x2aaef4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x2aaef8: 0x34630080
    ctx->pc = 0x2aaef8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 128));
    // 0x2aaefc: 0xde0201e8
    ctx->pc = 0x2aaefcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x2aaf00: 0xfc620000
    ctx->pc = 0x2aaf00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2aaf04: 0x3c031200
    ctx->pc = 0x2aaf04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x2aaf08: 0x34630090
    ctx->pc = 0x2aaf08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 144));
    // 0x2aaf0c: 0xde0201f0
    ctx->pc = 0x2aaf0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x2aaf10: 0xfc620000
    ctx->pc = 0x2aaf10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2aaf14: 0x3c031200
    ctx->pc = 0x2aaf14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x2aaf18: 0x346300a0
    ctx->pc = 0x2aaf18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 160));
    // 0x2aaf1c: 0xde0201f8
    ctx->pc = 0x2aaf1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x2aaf20: 0xfc620000
    ctx->pc = 0x2aaf20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2aaf24: 0x24040100
    ctx->pc = 0x2aaf24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2aaf28: 0x3c11003b
    ctx->pc = 0x2aaf28u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
    // 0x2aaf2c: 0xc0a9fe2
    ctx->pc = 0x2AAF2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF34u);
    ctx->pc = 0x2AAF30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294964432));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF34u; }
    }
    if (ctx->pc != 0x2AAF34u) { return; }
    ctx->pc = 0x2AAF34u;
    // 0x2aaf34: 0x3c031000
    ctx->pc = 0x2aaf34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2aaf38: 0x3463e010
    ctx->pc = 0x2aaf38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57360));
    // 0x2aaf3c: 0x24020004
    ctx->pc = 0x2aaf3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aaf40: 0xac620000
    ctx->pc = 0x2aaf40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2aaf44: 0x3c021000
    ctx->pc = 0x2aaf44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aaf48: 0x3442a020
    ctx->pc = 0x2aaf48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 40992));
    // 0x2aaf4c: 0xac400000
    ctx->pc = 0x2aaf4cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2aaf50: 0x3c021000
    ctx->pc = 0x2aaf50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aaf54: 0x3442a030
    ctx->pc = 0x2aaf54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 41008));
    // 0x2aaf58: 0xac500000
    ctx->pc = 0x2aaf58u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x2aaf5c: 0x3c031000
    ctx->pc = 0x2aaf5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2aaf60: 0x3463a000
    ctx->pc = 0x2aaf60u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 40960));
    // 0x2aaf64: 0x24020105
    ctx->pc = 0x2aaf64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 261));
    // 0x2aaf68: 0xac620000
    ctx->pc = 0x2aaf68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2aaf6c: 0x24040100
    ctx->pc = 0x2aaf6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2aaf70: 0xc0a9fe2
    ctx->pc = 0x2AAF70u;
    SET_GPR_U32(ctx, 31, 0x2AAF78u);
    ctx->pc = 0x2AAF74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294964432));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF78u; }
    }
    if (ctx->pc != 0x2AAF78u) { return; }
    ctx->pc = 0x2AAF78u;
    // 0x2aaf78: 0x3c020037
    ctx->pc = 0x2aaf78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aaf7c: 0xac408268
    ctx->pc = 0x2aaf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935144), GPR_U32(ctx, 0));
    // 0x2aaf80: 0xdfbf0020
    ctx->pc = 0x2aaf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aaf84:
    // 0x2aaf84: 0xdfb10010
    ctx->pc = 0x2aaf84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aaf88: 0xdfb00000
    ctx->pc = 0x2aaf88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aaf8c: 0x3e00008
    ctx->pc = 0x2AAF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAF90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AAEA0u: goto label_2aaea0;
            case 0x2AAF84u: goto label_2aaf84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AAF94u;
}
