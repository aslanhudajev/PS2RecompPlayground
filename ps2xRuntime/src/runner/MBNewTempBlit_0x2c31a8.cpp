#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewTempBlit
// Address: 0x2c31a8 - 0x2c32a4
void MBNewTempBlit_0x2c31a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c31a8u;

    // 0x2c31a8: 0x27bdff90
    ctx->pc = 0x2c31a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c31ac: 0xffbf0060
    ctx->pc = 0x2c31acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c31b0: 0xffb50050
    ctx->pc = 0x2c31b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c31b4: 0xffb40040
    ctx->pc = 0x2c31b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c31b8: 0xffb30030
    ctx->pc = 0x2c31b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c31bc: 0xffb20020
    ctx->pc = 0x2c31bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c31c0: 0xffb10010
    ctx->pc = 0x2c31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c31c4: 0xffb00000
    ctx->pc = 0x2c31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c31c8: 0x80882d
    ctx->pc = 0x2c31c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31cc: 0xa0902d
    ctx->pc = 0x2c31ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31d0: 0xc0982d
    ctx->pc = 0x2c31d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31d4: 0xe0a02d
    ctx->pc = 0x2c31d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31d8: 0x3c020038
    ctx->pc = 0x2c31d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c31dc: 0x8c428cb8
    ctx->pc = 0x2c31dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937784)));
    // 0x2c31e0: 0x28420020
    ctx->pc = 0x2c31e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 32));
    // 0x2c31e4: 0x14400005
    ctx->pc = 0x2C31E4u;
    {
        const bool branch_taken_0x2c31e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C31E8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c31e4) {
            ctx->pc = 0x2C31FCu;
            goto label_2c31fc;
        }
    }
    ctx->pc = 0x2C31ECu;
    // 0x2c31ec: 0x3c04003b
    ctx->pc = 0x2c31ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c31f0: 0x24846ea0
    ctx->pc = 0x2c31f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28320));
    // 0x2c31f4: 0xc0b49a6
    ctx->pc = 0x2C31F4u;
    SET_GPR_U32(ctx, 31, 0x2C31FCu);
    ctx->pc = 0x2C31F8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31FCu; }
    }
    if (ctx->pc != 0x2C31FCu) { return; }
    ctx->pc = 0x2C31FCu;
label_2c31fc:
    // 0x2c31fc: 0x3c020038
    ctx->pc = 0x2c31fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c3200: 0x8c508cb8
    ctx->pc = 0x2c3200u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294937784)));
    // 0x2c3204: 0x26100001
    ctx->pc = 0x2c3204u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c3208: 0xac508cb8
    ctx->pc = 0x2c3208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937784), GPR_U32(ctx, 16));
    // 0x2c320c: 0x24020038
    ctx->pc = 0x2c320cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c3210: 0x2028018
    ctx->pc = 0x2c3210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c3214: 0x3c020038
    ctx->pc = 0x2c3214u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c3218: 0x24428580
    ctx->pc = 0x2c3218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935936));
    // 0x2c321c: 0x2028021
    ctx->pc = 0x2c321cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c3220: 0xc0b0af6
    ctx->pc = 0x2C3220u;
    SET_GPR_U32(ctx, 31, 0x2C3228u);
    ctx->pc = 0x2C3224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitBlit_0x2c2bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3228u; }
    }
    if (ctx->pc != 0x2C3228u) { return; }
    ctx->pc = 0x2C3228u;
    // 0x2c3228: 0x200202d
    ctx->pc = 0x2c3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c322c: 0x220282d
    ctx->pc = 0x2c322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3230: 0xc0b0ed6
    ctx->pc = 0x2C3230u;
    SET_GPR_U32(ctx, 31, 0x2C3238u);
    ctx->pc = 0x2C3234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3238u; }
    }
    if (ctx->pc != 0x2C3238u) { return; }
    ctx->pc = 0x2C3238u;
    // 0x2c3238: 0x200202d
    ctx->pc = 0x2c3238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c323c: 0x240282d
    ctx->pc = 0x2c323cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3240: 0x3c013f80
    ctx->pc = 0x2c3240u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c3244: 0x44816000
    ctx->pc = 0x2c3244u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c3248: 0xc0b0df2
    ctx->pc = 0x2C3248u;
    SET_GPR_U32(ctx, 31, 0x2C3250u);
    ctx->pc = 0x2C324Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3250u; }
    }
    if (ctx->pc != 0x2C3250u) { return; }
    ctx->pc = 0x2C3250u;
    // 0x2c3250: 0x200202d
    ctx->pc = 0x2c3250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3254: 0x280282d
    ctx->pc = 0x2c3254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3258: 0xc0b0cf6
    ctx->pc = 0x2C3258u;
    SET_GPR_U32(ctx, 31, 0x2C3260u);
    ctx->pc = 0x2C325Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3260u; }
    }
    if (ctx->pc != 0x2C3260u) { return; }
    ctx->pc = 0x2C3260u;
    // 0x2c3260: 0x200202d
    ctx->pc = 0x2c3260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3264: 0x44806000
    ctx->pc = 0x2c3264u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2c3268: 0x3c013f80
    ctx->pc = 0x2c3268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c326c: 0x44816800
    ctx->pc = 0x2c326cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2c3270: 0x46006386
    ctx->pc = 0x2c3270u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c3274: 0xc0b0e6a
    ctx->pc = 0x2C3274u;
    SET_GPR_U32(ctx, 31, 0x2C327Cu);
    ctx->pc = 0x2C3278u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C327Cu; }
    }
    if (ctx->pc != 0x2C327Cu) { return; }
    ctx->pc = 0x2C327Cu;
    // 0x2c327c: 0x200102d
    ctx->pc = 0x2c327cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3280: 0xdfbf0060
    ctx->pc = 0x2c3280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3284: 0xdfb50050
    ctx->pc = 0x2c3284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3288: 0xdfb40040
    ctx->pc = 0x2c3288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c328c: 0xdfb30030
    ctx->pc = 0x2c328cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3290: 0xdfb20020
    ctx->pc = 0x2c3290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3294: 0xdfb10010
    ctx->pc = 0x2c3294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3298: 0xdfb00000
    ctx->pc = 0x2c3298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c329c: 0x3e00008
    ctx->pc = 0x2C329Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C32A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C31FCu: goto label_2c31fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C32A4u;
}
