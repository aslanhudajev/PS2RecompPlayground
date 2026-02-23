#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetAngleZX__FfffPiPi
// Address: 0x1c9130 - 0x1c91f4
void GetAngleZX__FfffPiPi_0x1c9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetAngleZX__FfffPiPi");


    ctx->pc = 0x1c9130u;

    // 0x1c9130: 0x27bdffc0
    ctx->pc = 0x1c9130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9134: 0x7fbf0030
    ctx->pc = 0x1c9134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c9138: 0x7fb10020
    ctx->pc = 0x1c9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c913c: 0x7fb00010
    ctx->pc = 0x1c913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9140: 0xe7b60008
    ctx->pc = 0x1c9140u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c9144: 0xe7b50004
    ctx->pc = 0x1c9144u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c9148: 0xe7b40000
    ctx->pc = 0x1c9148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c914c: 0x46006507
    ctx->pc = 0x1c914cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[12]);
    // 0x1c9150: 0x46007546
    ctx->pc = 0x1c9150u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1c9154: 0x70808e28
    ctx->pc = 0x1c9154u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c9158: 0x70a08628
    ctx->pc = 0x1c9158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c915c: 0x46006d86
    ctx->pc = 0x1c915cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1c9160: 0xc069e68
    ctx->pc = 0x1C9160u;
    SET_GPR_U32(ctx, 31, 0x1C9168u);
    ctx->pc = 0x1C9164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9168u; }
        else if (ctx->pc != 0x1C9168u) { ctx->pc = 0x1C9168u; }
    }
    if (ctx->pc != 0x1C9168u) { return; }
    ctx->pc = 0x1C9168u;
    // 0x1c9168: 0x2143c
    ctx->pc = 0x1c9168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c916c: 0x2143f
    ctx->pc = 0x1c916cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c9170: 0xae020000
    ctx->pc = 0x1c9170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c9174: 0x8e040000
    ctx->pc = 0x1c9174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9178: 0x24822000
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1c917c: 0x30424000
    ctx->pc = 0x1c917cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c9180: 0x1440000a
    ctx->pc = 0x1C9180u;
    {
        const bool branch_taken_0x1c9180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c9180) {
            ctx->pc = 0x1C91ACu;
            goto label_1c91ac;
        }
    }
    ctx->pc = 0x1C9188u;
    // 0x1c9188: 0xc06c26d
    ctx->pc = 0x1C9188u;
    SET_GPR_U32(ctx, 31, 0x1C9190u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9190u; }
        else if (ctx->pc != 0x1C9190u) { ctx->pc = 0x1C9190u; }
    }
    if (ctx->pc != 0x1C9190u) { return; }
    ctx->pc = 0x1C9190u;
    // 0x1c9190: 0x0
    ctx->pc = 0x1c9190u;
    // NOP
    // 0x1c9194: 0x0
    ctx->pc = 0x1c9194u;
    // NOP
    // 0x1c9198: 0x4600b343
    ctx->pc = 0x1c9198u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[13] = ctx->f[22] / ctx->f[0];
    // 0x1c919c: 0x0
    ctx->pc = 0x1c919cu;
    // NOP
    // 0x1c91a0: 0x0
    ctx->pc = 0x1c91a0u;
    // NOP
    // 0x1c91a4: 0x10000006
    ctx->pc = 0x1C91A4u;
    {
        const bool branch_taken_0x1c91a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c91a4) {
            ctx->pc = 0x1C91C0u;
            goto label_1c91c0;
        }
    }
    ctx->pc = 0x1C91ACu;
label_1c91ac:
    // 0x1c91ac: 0xc06c24e
    ctx->pc = 0x1C91ACu;
    SET_GPR_U32(ctx, 31, 0x1C91B4u);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91B4u; }
        else if (ctx->pc != 0x1C91B4u) { ctx->pc = 0x1C91B4u; }
    }
    if (ctx->pc != 0x1C91B4u) { return; }
    ctx->pc = 0x1C91B4u;
    // 0x1c91b4: 0x0
    ctx->pc = 0x1c91b4u;
    // NOP
    // 0x1c91b8: 0x0
    ctx->pc = 0x1c91b8u;
    // NOP
    // 0x1c91bc: 0x4600a343
    ctx->pc = 0x1c91bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_1c91c0:
    // 0x1c91c0: 0xc069e68
    ctx->pc = 0x1C91C0u;
    SET_GPR_U32(ctx, 31, 0x1C91C8u);
    ctx->pc = 0x1C91C4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91C8u; }
        else if (ctx->pc != 0x1C91C8u) { ctx->pc = 0x1C91C8u; }
    }
    if (ctx->pc != 0x1C91C8u) { return; }
    ctx->pc = 0x1C91C8u;
    // 0x1c91c8: 0x21c3c
    ctx->pc = 0x1c91c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c91cc: 0x31c3f
    ctx->pc = 0x1c91ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c91d0: 0xae230000
    ctx->pc = 0x1c91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c91d4: 0x7bbf0030
    ctx->pc = 0x1c91d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c91d8: 0x7bb10020
    ctx->pc = 0x1c91d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c91dc: 0x7bb00010
    ctx->pc = 0x1c91dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c91e0: 0xc7b60008
    ctx->pc = 0x1c91e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c91e4: 0xc7b50004
    ctx->pc = 0x1c91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c91e8: 0xc7b40000
    ctx->pc = 0x1c91e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c91ec: 0x3e00008
    ctx->pc = 0x1C91ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C91F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91C0u: goto label_1c91c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C91F4u;
}
