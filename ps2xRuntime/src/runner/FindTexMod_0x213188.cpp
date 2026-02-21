#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindTexMod
// Address: 0x213188 - 0x213240
void FindTexMod_0x213188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213188u;

    // 0x213188: 0x27bdff90
    ctx->pc = 0x213188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21318c: 0xffbf0060
    ctx->pc = 0x21318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x213190: 0xffb50050
    ctx->pc = 0x213190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x213194: 0xffb40040
    ctx->pc = 0x213194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x213198: 0xffb30030
    ctx->pc = 0x213198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21319c: 0xffb20020
    ctx->pc = 0x21319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2131a0: 0xffb10010
    ctx->pc = 0x2131a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2131a4: 0xffb00000
    ctx->pc = 0x2131a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2131a8: 0x80902d
    ctx->pc = 0x2131a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2131ac: 0xa0a02d
    ctx->pc = 0x2131acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2131b0: 0x12400017
    ctx->pc = 0x2131B0u;
    {
        const bool branch_taken_0x2131b0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2131B4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2131b0) {
            ctx->pc = 0x213210u;
            goto label_213210;
        }
    }
    ctx->pc = 0x2131B8u;
    // 0x2131b8: 0x8e420008
    ctx->pc = 0x2131b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2131bc: 0x18400014
    ctx->pc = 0x2131BCu;
    {
        const bool branch_taken_0x2131bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2131C0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2131bc) {
            ctx->pc = 0x213210u;
            goto label_213210;
        }
    }
    ctx->pc = 0x2131C4u;
    // 0x2131c4: 0x24150058
    ctx->pc = 0x2131c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2131c8: 0x2351818
    ctx->pc = 0x2131c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2131cc: 0x0
    ctx->pc = 0x2131ccu;
    // NOP
label_2131d0:
    // 0x2131d0: 0x8e42000c
    ctx->pc = 0x2131d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2131d4: 0x628021
    ctx->pc = 0x2131d4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2131d8: 0x26040004
    ctx->pc = 0x2131d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2131dc: 0x280282d
    ctx->pc = 0x2131dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2131e0: 0xc0bf3c0
    ctx->pc = 0x2131E0u;
    SET_GPR_U32(ctx, 31, 0x2131E8u);
    ctx->pc = 0x2131E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131E8u; }
    }
    if (ctx->pc != 0x2131E8u) { return; }
    ctx->pc = 0x2131E8u;
    // 0x2131e8: 0x14400005
    ctx->pc = 0x2131E8u;
    {
        const bool branch_taken_0x2131e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2131ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2131e8) {
            ctx->pc = 0x213200u;
            goto label_213200;
        }
    }
    ctx->pc = 0x2131F0u;
    // 0x2131f0: 0x56600001
    ctx->pc = 0x2131F0u;
    {
        const bool branch_taken_0x2131f0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x2131f0) {
            ctx->pc = 0x2131F4u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
            ctx->pc = 0x2131F8u;
            goto label_2131f8;
        }
    }
    ctx->pc = 0x2131F8u;
label_2131f8:
    // 0x2131f8: 0x10000008
    ctx->pc = 0x2131F8u;
    {
        const bool branch_taken_0x2131f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2131FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        if (branch_taken_0x2131f8) {
            ctx->pc = 0x21321Cu;
            goto label_21321c;
        }
    }
    ctx->pc = 0x213200u;
label_213200:
    // 0x213200: 0x8e420008
    ctx->pc = 0x213200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x213204: 0x222102a
    ctx->pc = 0x213204u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x213208: 0x1440fff1
    ctx->pc = 0x213208u;
    {
        const bool branch_taken_0x213208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21320Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x213208) {
            ctx->pc = 0x2131D0u;
            goto label_2131d0;
        }
    }
    ctx->pc = 0x213210u;
label_213210:
    // 0x213210: 0x56600001
    ctx->pc = 0x213210u;
    {
        const bool branch_taken_0x213210 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x213210) {
            ctx->pc = 0x213214u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x213218u;
            goto label_213218;
        }
    }
    ctx->pc = 0x213218u;
label_213218:
    // 0x213218: 0x102d
    ctx->pc = 0x213218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21321c:
    // 0x21321c: 0xdfbf0060
    ctx->pc = 0x21321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x213220: 0xdfb50050
    ctx->pc = 0x213220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213224: 0xdfb40040
    ctx->pc = 0x213224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213228: 0xdfb30030
    ctx->pc = 0x213228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21322c: 0xdfb20020
    ctx->pc = 0x21322cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213230: 0xdfb10010
    ctx->pc = 0x213230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213234: 0xdfb00000
    ctx->pc = 0x213234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213238: 0x3e00008
    ctx->pc = 0x213238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21323Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2131D0u: goto label_2131d0;
            case 0x2131F8u: goto label_2131f8;
            case 0x213200u: goto label_213200;
            case 0x213210u: goto label_213210;
            case 0x213218u: goto label_213218;
            case 0x21321Cu: goto label_21321c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213240u;
}
