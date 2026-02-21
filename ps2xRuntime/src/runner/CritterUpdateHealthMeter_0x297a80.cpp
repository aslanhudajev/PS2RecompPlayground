#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterUpdateHealthMeter
// Address: 0x297a80 - 0x297b24
void CritterUpdateHealthMeter_0x297a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x297a80u;

    // 0x297a80: 0x27bdffe0
    ctx->pc = 0x297a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297a84: 0xffbf0010
    ctx->pc = 0x297a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297a88: 0xffb00000
    ctx->pc = 0x297a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297a8c: 0x80802d
    ctx->pc = 0x297a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a90: 0x86040484
    ctx->pc = 0x297a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1156)));
    // 0x297a94: 0x4820004
    ctx->pc = 0x297A94u;
    {
        const bool branch_taken_0x297a94 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x297a94) {
            ctx->pc = 0x297A98u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1232)));
            ctx->pc = 0x297AA8u;
            goto label_297aa8;
        }
    }
    ctx->pc = 0x297A9Cu;
    // 0x297a9c: 0xc0a78fc
    ctx->pc = 0x297A9Cu;
    SET_GPR_U32(ctx, 31, 0x297AA4u);
    ctx->pc = 0x297AA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x29E3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        HealthMeterUpdate_0x29e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AA4u; }
    }
    if (ctx->pc != 0x297AA4u) { return; }
    ctx->pc = 0x297AA4u;
    // 0x297aa4: 0x8e0204d0
    ctx->pc = 0x297aa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1232)));
label_297aa8:
    // 0x297aa8: 0x1040001a
    ctx->pc = 0x297AA8u;
    {
        const bool branch_taken_0x297aa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x297AACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x297aa8) {
            ctx->pc = 0x297B14u;
            goto label_297b14;
        }
    }
    ctx->pc = 0x297AB0u;
    // 0x297ab0: 0x8e030004
    ctx->pc = 0x297ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297ab4: 0x8c42e7c8
    ctx->pc = 0x297ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x297ab8: 0xc46000e4
    ctx->pc = 0x297ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297abc: 0xc44100ac
    ctx->pc = 0x297abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ac0: 0x46010002
    ctx->pc = 0x297ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297ac4: 0xc60104f4
    ctx->pc = 0x297ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297ac8: 0x0
    ctx->pc = 0x297ac8u;
    // NOP
    // 0x297acc: 0x0
    ctx->pc = 0x297accu;
    // NOP
    // 0x297ad0: 0x46000b03
    ctx->pc = 0x297ad0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x297ad4: 0x44800000
    ctx->pc = 0x297ad4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x297ad8: 0x46000836
    ctx->pc = 0x297ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297adc: 0x0
    ctx->pc = 0x297adcu;
    // NOP
    // 0x297ae0: 0x45020005
    ctx->pc = 0x297AE0u;
    {
        const bool branch_taken_0x297ae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297ae0) {
            ctx->pc = 0x297AE4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1232)));
            ctx->pc = 0x297AF8u;
            goto label_297af8;
        }
    }
    ctx->pc = 0x297AE8u;
    // 0x297ae8: 0xc08496c
    ctx->pc = 0x297AE8u;
    SET_GPR_U32(ctx, 31, 0x297AF0u);
    ctx->pc = 0x297AECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1160));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AF0u; }
    }
    if (ctx->pc != 0x297AF0u) { return; }
    ctx->pc = 0x297AF0u;
    // 0x297af0: 0x10000008
    ctx->pc = 0x297AF0u;
    {
        const bool branch_taken_0x297af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297AF4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 0));
        if (branch_taken_0x297af0) {
            ctx->pc = 0x297B14u;
            goto label_297b14;
        }
    }
    ctx->pc = 0x297AF8u;
label_297af8:
    // 0x297af8: 0x3c013f80
    ctx->pc = 0x297af8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x297afc: 0x44816800
    ctx->pc = 0x297afcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x297b00: 0x46006b86
    ctx->pc = 0x297b00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x297b04: 0xdfbf0010
    ctx->pc = 0x297b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b08: 0xdfb00000
    ctx->pc = 0x297b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b0c: 0x80b41ae
    ctx->pc = 0x297B0Cu;
    ctx->pc = 0x297B10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D06B8u;
    MBTreeSetScale_0x2d06b8(rdram, ctx, runtime); return;
    ctx->pc = 0x297B14u;
label_297b14:
    // 0x297b14: 0xdfbf0010
    ctx->pc = 0x297b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b18: 0xdfb00000
    ctx->pc = 0x297b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b1c: 0x3e00008
    ctx->pc = 0x297B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297AA8u: goto label_297aa8;
            case 0x297AF8u: goto label_297af8;
            case 0x297B14u: goto label_297b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297B24u;
}
