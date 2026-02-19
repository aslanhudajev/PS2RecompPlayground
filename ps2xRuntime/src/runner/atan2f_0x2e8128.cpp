#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: atan2f
// Address: 0x2e8128 - 0x2e8250
void atan2f_0x2e8128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e8128u;

    // 0x2e8128: 0x27bdff90
    ctx->pc = 0x2e8128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e812c: 0xe7b50058
    ctx->pc = 0x2e812cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e8130: 0xe7b40050
    ctx->pc = 0x2e8130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e8134: 0x46006d46
    ctx->pc = 0x2e8134u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e8138: 0xffb00030
    ctx->pc = 0x2e8138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e813c: 0xe7b60060
    ctx->pc = 0x2e813cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e8140: 0xffbf0040
    ctx->pc = 0x2e8140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e8144: 0xc0ba8e2
    ctx->pc = 0x2E8144u;
    SET_GPR_U32(ctx, 31, 0x2E814Cu);
    ctx->pc = 0x2E8148u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2EA388u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_atan2f_0x2ea388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E814Cu; }
    }
    if (ctx->pc != 0x2E814Cu) { return; }
    ctx->pc = 0x2E814Cu;
    // 0x2e814c: 0x3c02003c
    ctx->pc = 0x2e814cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e8150: 0x8c509c60
    ctx->pc = 0x2e8150u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294941792)));
    // 0x2e8154: 0x2403ffff
    ctx->pc = 0x2e8154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8158: 0x12030035
    ctx->pc = 0x2E8158u;
    {
        const bool branch_taken_0x2e8158 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x2E815Cu;
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e8158) {
            ctx->pc = 0x2E8230u;
            goto label_2e8230;
        }
    }
    ctx->pc = 0x2E8160u;
    // 0x2e8160: 0xc0bb2f2
    ctx->pc = 0x2E8160u;
    SET_GPR_U32(ctx, 31, 0x2E8168u);
    ctx->pc = 0x2E8164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8168u; }
    }
    if (ctx->pc != 0x2E8168u) { return; }
    ctx->pc = 0x2E8168u;
    // 0x2e8168: 0x14400032
    ctx->pc = 0x2E8168u;
    {
        const bool branch_taken_0x2e8168 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E816Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2e8168) {
            ctx->pc = 0x2E8234u;
            goto label_2e8234;
        }
    }
    ctx->pc = 0x2E8170u;
    // 0x2e8170: 0xc0bb2f2
    ctx->pc = 0x2E8170u;
    SET_GPR_U32(ctx, 31, 0x2E8178u);
    ctx->pc = 0x2E8174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8178u; }
    }
    if (ctx->pc != 0x2E8178u) { return; }
    ctx->pc = 0x2E8178u;
    // 0x2e8178: 0x1440002e
    ctx->pc = 0x2E8178u;
    {
        const bool branch_taken_0x2e8178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E817Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2e8178) {
            ctx->pc = 0x2E8234u;
            goto label_2e8234;
        }
    }
    ctx->pc = 0x2E8180u;
    // 0x2e8180: 0x44800000
    ctx->pc = 0x2e8180u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2e8184: 0x4600a832
    ctx->pc = 0x2e8184u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8188: 0x0
    ctx->pc = 0x2e8188u;
    // NOP
    // 0x2e818c: 0x45020029
    ctx->pc = 0x2E818Cu;
    {
        const bool branch_taken_0x2e818c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e818c) {
            ctx->pc = 0x2E8190u;
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x2E8234u;
            goto label_2e8234;
        }
    }
    ctx->pc = 0x2E8194u;
    // 0x2e8194: 0x4600a032
    ctx->pc = 0x2e8194u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8198: 0x0
    ctx->pc = 0x2e8198u;
    // NOP
    // 0x2e819c: 0x45000025
    ctx->pc = 0x2E819Cu;
    {
        const bool branch_taken_0x2e819c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E81A0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2e819c) {
            ctx->pc = 0x2E8234u;
            goto label_2e8234;
        }
    }
    ctx->pc = 0x2E81A4u;
    // 0x2e81a4: 0xc0be862
    ctx->pc = 0x2E81A4u;
    SET_GPR_U32(ctx, 31, 0x2E81ACu);
    ctx->pc = 0x2E81A8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81ACu; }
    }
    if (ctx->pc != 0x2E81ACu) { return; }
    ctx->pc = 0x2E81ACu;
    // 0x2e81ac: 0x4600ab06
    ctx->pc = 0x2e81acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e81b0: 0xc0be862
    ctx->pc = 0x2E81B0u;
    SET_GPR_U32(ctx, 31, 0x2E81B8u);
    ctx->pc = 0x2E81B4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81B8u; }
    }
    if (ctx->pc != 0x2E81B8u) { return; }
    ctx->pc = 0x2E81B8u;
    // 0x2e81b8: 0xffa20010
    ctx->pc = 0x2e81b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2e81bc: 0x3c03003c
    ctx->pc = 0x2e81bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2e81c0: 0x102d
    ctx->pc = 0x2e81c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81c4: 0x24040001
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e81c8: 0x24639360
    ctx->pc = 0x2e81c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939488));
    // 0x2e81cc: 0xffa20018
    ctx->pc = 0x2e81ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2e81d0: 0xafa40000
    ctx->pc = 0x2e81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e81d4: 0x24020002
    ctx->pc = 0x2e81d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e81d8: 0xafa30004
    ctx->pc = 0x2e81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2e81dc: 0x12020005
    ctx->pc = 0x2E81DCu;
    {
        const bool branch_taken_0x2e81dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E81E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x2e81dc) {
            ctx->pc = 0x2E81F4u;
            goto label_2e81f4;
        }
    }
    ctx->pc = 0x2E81E4u;
    // 0x2e81e4: 0xc0bb1f0
    ctx->pc = 0x2E81E4u;
    SET_GPR_U32(ctx, 31, 0x2E81ECu);
    ctx->pc = 0x2E81E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81ECu; }
    }
    if (ctx->pc != 0x2E81ECu) { return; }
    ctx->pc = 0x2E81ECu;
    // 0x2e81ec: 0x14400006
    ctx->pc = 0x2E81ECu;
    {
        const bool branch_taken_0x2e81ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E81F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e81ec) {
            ctx->pc = 0x2E8208u;
            goto label_2e8208;
        }
    }
    ctx->pc = 0x2E81F4u;
label_2e81f4:
    // 0x2e81f4: 0xc0be8b2
    ctx->pc = 0x2E81F4u;
    SET_GPR_U32(ctx, 31, 0x2E81FCu);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81FCu; }
    }
    if (ctx->pc != 0x2E81FCu) { return; }
    ctx->pc = 0x2E81FCu;
    // 0x2e81fc: 0x24030021
    ctx->pc = 0x2e81fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e8200: 0xac430000
    ctx->pc = 0x2e8200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e8204: 0x8fa20020
    ctx->pc = 0x2e8204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8208:
    // 0x2e8208: 0x10400005
    ctx->pc = 0x2E8208u;
    {
        const bool branch_taken_0x2e8208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e8208) {
            ctx->pc = 0x2E8220u;
            goto label_2e8220;
        }
    }
    ctx->pc = 0x2E8210u;
    // 0x2e8210: 0xc0be8b2
    ctx->pc = 0x2E8210u;
    SET_GPR_U32(ctx, 31, 0x2E8218u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8218u; }
    }
    if (ctx->pc != 0x2E8218u) { return; }
    ctx->pc = 0x2E8218u;
    // 0x2e8218: 0x8fa30020
    ctx->pc = 0x2e8218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e821c: 0xac430000
    ctx->pc = 0x2e821cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e8220:
    // 0x2e8220: 0xc0be564
    ctx->pc = 0x2E8220u;
    SET_GPR_U32(ctx, 31, 0x2E8228u);
    ctx->pc = 0x2E8224u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8228u; }
    }
    if (ctx->pc != 0x2E8228u) { return; }
    ctx->pc = 0x2E8228u;
    // 0x2e8228: 0x10000003
    ctx->pc = 0x2E8228u;
    {
        const bool branch_taken_0x2e8228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E822Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2e8228) {
            ctx->pc = 0x2E8238u;
            goto label_2e8238;
        }
    }
    ctx->pc = 0x2E8230u;
label_2e8230:
    // 0x2e8230: 0x4600b006
    ctx->pc = 0x2e8230u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_2e8234:
    // 0x2e8234: 0xdfbf0040
    ctx->pc = 0x2e8234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8238:
    // 0x2e8238: 0xdfb00030
    ctx->pc = 0x2e8238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e823c: 0xc7b60060
    ctx->pc = 0x2e823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e8240: 0xc7b50058
    ctx->pc = 0x2e8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8244: 0xc7b40050
    ctx->pc = 0x2e8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8248: 0x3e00008
    ctx->pc = 0x2E8248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E824Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E81F4u: goto label_2e81f4;
            case 0x2E8208u: goto label_2e8208;
            case 0x2E8220u: goto label_2e8220;
            case 0x2E8230u: goto label_2e8230;
            case 0x2E8234u: goto label_2e8234;
            case 0x2E8238u: goto label_2e8238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8250u;
}
