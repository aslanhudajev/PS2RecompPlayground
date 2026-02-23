#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EntryObjModel_i__FP7_OBJENTi
// Address: 0x215200 - 0x215250
void EntryObjModel_i__FP7_OBJENTi_0x215200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EntryObjModel_i__FP7_OBJENTi");


    ctx->pc = 0x215200u;

    // 0x215200: 0x27bdffe0
    ctx->pc = 0x215200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215204: 0x7fbf0010
    ctx->pc = 0x215204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x215208: 0x3c020001
    ctx->pc = 0x215208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x21520c: 0x7fb00000
    ctx->pc = 0x21520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215210: 0x34430101
    ctx->pc = 0x215210u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 257));
    // 0x215214: 0x10a30004
    ctx->pc = 0x215214u;
    {
        const bool branch_taken_0x215214 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x215218u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215214) {
            ctx->pc = 0x215228u;
            goto label_215228;
        }
    }
    ctx->pc = 0x21521Cu;
    // 0x21521c: 0x34420135
    ctx->pc = 0x21521cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 309));
    // 0x215220: 0x14a20005
    ctx->pc = 0x215220u;
    {
        const bool branch_taken_0x215220 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x215220) {
            ctx->pc = 0x215238u;
            goto label_215238;
        }
    }
    ctx->pc = 0x215228u;
label_215228:
    // 0x215228: 0x8e040000
    ctx->pc = 0x215228u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21522c: 0x3c020005
    ctx->pc = 0x21522cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x215230: 0xc085470
    ctx->pc = 0x215230u;
    SET_GPR_U32(ctx, 31, 0x215238u);
    ctx->pc = 0x215234u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 1037));
    ctx->pc = 0x2151C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PolForce_hinobto__FPii_0x2151c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215238u; }
        else if (ctx->pc != 0x215238u) { ctx->pc = 0x215238u; }
    }
    if (ctx->pc != 0x215238u) { return; }
    ctx->pc = 0x215238u;
label_215238:
    // 0x215238: 0xc06a9dc
    ctx->pc = 0x215238u;
    SET_GPR_U32(ctx, 31, 0x215240u);
    ctx->pc = 0x21523Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1AA770u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLinkDummyExtStripData_0x1aa770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215240u; }
        else if (ctx->pc != 0x215240u) { ctx->pc = 0x215240u; }
    }
    if (ctx->pc != 0x215240u) { return; }
    ctx->pc = 0x215240u;
    // 0x215240: 0x7bbf0010
    ctx->pc = 0x215240u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215244: 0x7bb00000
    ctx->pc = 0x215244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215248: 0x3e00008
    ctx->pc = 0x215248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21524Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215228u: goto label_215228;
            case 0x215238u: goto label_215238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215250u;
}
