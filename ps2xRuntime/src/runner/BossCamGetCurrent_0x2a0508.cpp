#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamGetCurrent
// Address: 0x2a0508 - 0x2a05c0
void BossCamGetCurrent_0x2a0508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a0508u;

    // 0x2a0508: 0x27bdffc0
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a050c: 0xffbf0030
    ctx->pc = 0x2a050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a0510: 0xffb00020
    ctx->pc = 0x2a0510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a0514: 0x3c020036
    ctx->pc = 0x2a0514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0518: 0x8c43dbc0
    ctx->pc = 0x2a0518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a051c: 0x3c02003a
    ctx->pc = 0x2a051cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a0520: 0x8c421bd0
    ctx->pc = 0x2a0520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2a0524: 0xc46100a4
    ctx->pc = 0x2a0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0528: 0xc44000a0
    ctx->pc = 0x2a0528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a052c: 0x46000b01
    ctx->pc = 0x2a052cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a0530: 0xe7ac0010
    ctx->pc = 0x2a0530u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a0534: 0xc46200a8
    ctx->pc = 0x2a0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0538: 0xc44000a4
    ctx->pc = 0x2a0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a053c: 0x46001081
    ctx->pc = 0x2a053cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a0540: 0xe7a20014
    ctx->pc = 0x2a0540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a0544: 0xc46100ac
    ctx->pc = 0x2a0544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0548: 0xc44000a8
    ctx->pc = 0x2a0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a054c: 0x46000841
    ctx->pc = 0x2a054cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a0550: 0xe7a10018
    ctx->pc = 0x2a0550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a0554: 0x460c6002
    ctx->pc = 0x2a0554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a0558: 0x46021082
    ctx->pc = 0x2a0558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a055c: 0x46020000
    ctx->pc = 0x2a055cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a0560: 0x46010842
    ctx->pc = 0x2a0560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a0564: 0x46010000
    ctx->pc = 0x2a0564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0568: 0x0
    ctx->pc = 0x2a0568u;
    // NOP
    // 0x2a056c: 0x0
    ctx->pc = 0x2a056cu;
    // NOP
    // 0x2a0570: 0x46000004
    ctx->pc = 0x2a0570u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a0574: 0x46000032
    ctx->pc = 0x2a0574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0578: 0x0
    ctx->pc = 0x2a0578u;
    // NOP
    // 0x2a057c: 0x45010005
    ctx->pc = 0x2A057Cu;
    {
        const bool branch_taken_0x2a057c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0580u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a057c) {
            ctx->pc = 0x2A0594u;
            goto label_2a0594;
        }
    }
    ctx->pc = 0x2A0584u;
    // 0x2a0584: 0x460c6302
    ctx->pc = 0x2a0584u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a0588: 0x46026300
    ctx->pc = 0x2a0588u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2a058c: 0xc0ba284
    ctx->pc = 0x2A058Cu;
    SET_GPR_U32(ctx, 31, 0x2A0594u);
    ctx->pc = 0x2A0590u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0594u; }
    }
    if (ctx->pc != 0x2A0594u) { return; }
    ctx->pc = 0x2A0594u;
label_2a0594:
    // 0x2a0594: 0xe60000f4
    ctx->pc = 0x2a0594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2a0598: 0x3c020036
    ctx->pc = 0x2a0598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a059c: 0x8c46dbc0
    ctx->pc = 0x2a059cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a05a0: 0x27a40010
    ctx->pc = 0x2a05a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a05a4: 0x24c500ec
    ctx->pc = 0x2a05a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 236));
    // 0x2a05a8: 0xc0b59e6
    ctx->pc = 0x2A05A8u;
    SET_GPR_U32(ctx, 31, 0x2A05B0u);
    ctx->pc = 0x2A05ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 260));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A05B0u; }
    }
    if (ctx->pc != 0x2A05B0u) { return; }
    ctx->pc = 0x2A05B0u;
    // 0x2a05b0: 0xdfbf0030
    ctx->pc = 0x2a05b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a05b4: 0xdfb00020
    ctx->pc = 0x2a05b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a05b8: 0x3e00008
    ctx->pc = 0x2A05B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A05BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0594u: goto label_2a0594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A05C0u;
}
