#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutPolyMatCE__Fii
// Address: 0x215000 - 0x215070
void PutPolyMatCE__Fii_0x215000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutPolyMatCE__Fii");


    ctx->pc = 0x215000u;

    // 0x215000: 0x41c03
    ctx->pc = 0x215000u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x215004: 0x3406ffff
    ctx->pc = 0x215004u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65535));
    // 0x215008: 0x661824
    ctx->pc = 0x215008u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21500c: 0x33900
    ctx->pc = 0x21500cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 4));
    // 0x215010: 0x3c030050
    ctx->pc = 0x215010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x215014: 0x27bdfff0
    ctx->pc = 0x215014u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215018: 0x2463ea20
    ctx->pc = 0x215018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x21501c: 0x7fbf0000
    ctx->pc = 0x21501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x215020: 0x671821
    ctx->pc = 0x215020u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x215024: 0x8c660000
    ctx->pc = 0x215024u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215028: 0x3c038000
    ctx->pc = 0x215028u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x21502c: 0xc31824
    ctx->pc = 0x21502cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x215030: 0x1060000c
    ctx->pc = 0x215030u;
    {
        const bool branch_taken_0x215030 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x215030) {
            ctx->pc = 0x215064u;
            goto label_215064;
        }
    }
    ctx->pc = 0x215038u;
    // 0x215038: 0x3c020050
    ctx->pc = 0x215038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x21503c: 0x2442ea24
    ctx->pc = 0x21503cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x215040: 0x471021
    ctx->pc = 0x215040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x215044: 0x8c420000
    ctx->pc = 0x215044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215048: 0x3084ffff
    ctx->pc = 0x215048u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x21504c: 0x41840
    ctx->pc = 0x21504cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x215050: 0x641821
    ctx->pc = 0x215050u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215054: 0x31880
    ctx->pc = 0x215054u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x215058: 0x431021
    ctx->pc = 0x215058u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21505c: 0xc06a0b8
    ctx->pc = 0x21505Cu;
    SET_GPR_U32(ctx, 31, 0x215064u);
    ctx->pc = 0x215060u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A82E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutCategoryEntry_0x1a82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215064u; }
        else if (ctx->pc != 0x215064u) { ctx->pc = 0x215064u; }
    }
    if (ctx->pc != 0x215064u) { return; }
    ctx->pc = 0x215064u;
label_215064:
    // 0x215064: 0x7bbf0000
    ctx->pc = 0x215064u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215068: 0x3e00008
    ctx->pc = 0x215068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21506Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215064u: goto label_215064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215070u;
}
