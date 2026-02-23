#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setCamSplCnt__22CameraMgrInternalClassFi
// Address: 0x1cace0 - 0x1cad8c
void setCamSplCnt__22CameraMgrInternalClassFi_0x1cace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setCamSplCnt__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cace0u;

    // 0x1cace0: 0x51040
    ctx->pc = 0x1cace0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cace4: 0x451021
    ctx->pc = 0x1cace4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cace8: 0x21080
    ctx->pc = 0x1cace8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cacec: 0x451021
    ctx->pc = 0x1cacecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cacf0: 0x23100
    ctx->pc = 0x1cacf0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cacf4: 0x510c0
    ctx->pc = 0x1cacf4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cacf8: 0x451021
    ctx->pc = 0x1cacf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cacfc: 0x27bdfff0
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cad00: 0x21180
    ctx->pc = 0x1cad00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cad04: 0x7fbf0000
    ctx->pc = 0x1cad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1cad08: 0x441021
    ctx->pc = 0x1cad08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cad0c: 0x8c420010
    ctx->pc = 0x1cad0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cad10: 0x8f838c48
    ctx->pc = 0x1cad10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cad14: 0x210c0
    ctx->pc = 0x1cad14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cad18: 0x441021
    ctx->pc = 0x1cad18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cad1c: 0x8c420904
    ctx->pc = 0x1cad1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2308)));
    // 0x1cad20: 0x661821
    ctx->pc = 0x1cad20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cad24: 0x24670010
    ctx->pc = 0x1cad24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1cad28: 0x24030001
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cad2c: 0x8c46000c
    ctx->pc = 0x1cad2cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cad30: 0x14c30003
    ctx->pc = 0x1CAD30u;
    {
        const bool branch_taken_0x1cad30 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x1CAD34u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1cad30) {
            ctx->pc = 0x1CAD40u;
            goto label_1cad40;
        }
    }
    ctx->pc = 0x1CAD38u;
    // 0x1cad38: 0x1000000f
    ctx->pc = 0x1CAD38u;
    {
        const bool branch_taken_0x1cad38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAD3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 3));
        if (branch_taken_0x1cad38) {
            ctx->pc = 0x1CAD78u;
            goto label_1cad78;
        }
    }
    ctx->pc = 0x1CAD40u;
label_1cad40:
    // 0x1cad40: 0x461821
    ctx->pc = 0x1cad40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cad44: 0x31080
    ctx->pc = 0x1cad44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cad48: 0x621021
    ctx->pc = 0x1cad48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cad4c: 0x23040
    ctx->pc = 0x1cad4cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cad50: 0x3c028888
    ctx->pc = 0x1cad50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
    // 0x1cad54: 0x34428889
    ctx->pc = 0x1cad54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1cad58: 0x460018
    ctx->pc = 0x1cad58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1cad5c: 0x61fc2
    ctx->pc = 0x1cad5cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cad60: 0x0
    ctx->pc = 0x1cad60u;
    // NOP
    // 0x1cad64: 0x1010
    ctx->pc = 0x1cad64u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1cad68: 0x461021
    ctx->pc = 0x1cad68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cad6c: 0x21143
    ctx->pc = 0x1cad6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1cad70: 0x431821
    ctx->pc = 0x1cad70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cad74: 0xace300bc
    ctx->pc = 0x1cad74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 3));
label_1cad78:
    // 0x1cad78: 0xc072cd8
    ctx->pc = 0x1CAD78u;
    SET_GPR_U32(ctx, 31, 0x1CAD80u);
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD80u; }
        else if (ctx->pc != 0x1CAD80u) { ctx->pc = 0x1CAD80u; }
    }
    if (ctx->pc != 0x1CAD80u) { return; }
    ctx->pc = 0x1CAD80u;
    // 0x1cad80: 0x7bbf0000
    ctx->pc = 0x1cad80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cad84: 0x3e00008
    ctx->pc = 0x1CAD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAD88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAD40u: goto label_1cad40;
            case 0x1CAD78u: goto label_1cad78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CAD8Cu;
}
