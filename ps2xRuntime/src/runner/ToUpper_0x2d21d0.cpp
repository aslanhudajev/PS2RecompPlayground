#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ToUpper
// Address: 0x2d21d0 - 0x2d2234
void ToUpper_0x2d21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d21d0u;

    // 0x2d21d0: 0x27bdffe0
    ctx->pc = 0x2d21d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d21d4: 0xffbf0010
    ctx->pc = 0x2d21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d21d8: 0xffb00000
    ctx->pc = 0x2d21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d21dc: 0xc0bf306
    ctx->pc = 0x2D21DCu;
    SET_GPR_U32(ctx, 31, 0x2D21E4u);
    ctx->pc = 0x2D21E0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D21E4u; }
    }
    if (ctx->pc != 0x2D21E4u) { return; }
    ctx->pc = 0x2D21E4u;
    // 0x2d21e4: 0x40302d
    ctx->pc = 0x2d21e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21e8: 0x18c0000e
    ctx->pc = 0x2D21E8u;
    {
        const bool branch_taken_0x2d21e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D21ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d21e8) {
            ctx->pc = 0x2D2224u;
            goto label_2d2224;
        }
    }
    ctx->pc = 0x2D21F0u;
    // 0x2d21f0: 0x3c02003c
    ctx->pc = 0x2d21f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2d21f4: 0x2447a781
    ctx->pc = 0x2d21f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294944641));
label_2d21f8:
    // 0x2d21f8: 0x82040000
    ctx->pc = 0x2d21f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d21fc: 0x871021
    ctx->pc = 0x2d21fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d2200: 0x90420000
    ctx->pc = 0x2d2200u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2204: 0x30420002
    ctx->pc = 0x2d2204u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2d2208: 0x2483ffe0
    ctx->pc = 0x2d2208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2d220c: 0x62200b
    ctx->pc = 0x2d220cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2d2210: 0xa2040000
    ctx->pc = 0x2d2210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2214: 0x24a50001
    ctx->pc = 0x2d2214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d2218: 0xa6102a
    ctx->pc = 0x2d2218u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2d221c: 0x1440fff6
    ctx->pc = 0x2D221Cu;
    {
        const bool branch_taken_0x2d221c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2220u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d221c) {
            ctx->pc = 0x2D21F8u;
            goto label_2d21f8;
        }
    }
    ctx->pc = 0x2D2224u;
label_2d2224:
    // 0x2d2224: 0xdfbf0010
    ctx->pc = 0x2d2224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2228: 0xdfb00000
    ctx->pc = 0x2d2228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d222c: 0x3e00008
    ctx->pc = 0x2D222Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D21F8u: goto label_2d21f8;
            case 0x2D2224u: goto label_2d2224;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2234u;
}
