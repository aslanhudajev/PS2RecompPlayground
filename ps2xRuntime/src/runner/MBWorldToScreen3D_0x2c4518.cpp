#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWorldToScreen3D
// Address: 0x2c4518 - 0x2c45e0
void MBWorldToScreen3D_0x2c4518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4518u;

    // 0x2c4518: 0x27bdffc0
    ctx->pc = 0x2c4518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c451c: 0xffbf0030
    ctx->pc = 0x2c451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c4520: 0xffb20020
    ctx->pc = 0x2c4520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c4524: 0xffb10010
    ctx->pc = 0x2c4524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c4528: 0xffb00000
    ctx->pc = 0x2c4528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c452c: 0x80802d
    ctx->pc = 0x2c452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4530: 0x3c020036
    ctx->pc = 0x2c4530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c4534: 0x8c51dee0
    ctx->pc = 0x2c4534u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c4538: 0x8e220004
    ctx->pc = 0x2c4538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c453c: 0x90420003
    ctx->pc = 0x2c453cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2c4540: 0x14400005
    ctx->pc = 0x2C4540u;
    {
        const bool branch_taken_0x2c4540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4544u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4540) {
            ctx->pc = 0x2C4558u;
            goto label_2c4558;
        }
    }
    ctx->pc = 0x2C4548u;
    // 0x2c4548: 0x8e220010
    ctx->pc = 0x2c4548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c454c: 0x8c420040
    ctx->pc = 0x2c454cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c4550: 0x50400004
    ctx->pc = 0x2C4550u;
    {
        const bool branch_taken_0x2c4550 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4550) {
            ctx->pc = 0x2C4554u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2C4564u;
            goto label_2c4564;
        }
    }
    ctx->pc = 0x2C4558u;
label_2c4558:
    // 0x2c4558: 0xc0ab0b4
    ctx->pc = 0x2C4558u;
    SET_GPR_U32(ctx, 31, 0x2C4560u);
    ctx->pc = 0x2AC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbProjCalc_0x2ac2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4560u; }
    }
    if (ctx->pc != 0x2C4560u) { return; }
    ctx->pc = 0x2C4560u;
    // 0x2c4560: 0x8e220004
    ctx->pc = 0x2c4560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c4564:
    // 0x2c4564: 0x90420002
    ctx->pc = 0x2c4564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c4568: 0x50400004
    ctx->pc = 0x2C4568u;
    {
        const bool branch_taken_0x2c4568 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4568) {
            ctx->pc = 0x2C456Cu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2C457Cu;
            goto label_2c457c;
        }
    }
    ctx->pc = 0x2C4570u;
    // 0x2c4570: 0xc0aae72
    ctx->pc = 0x2C4570u;
    SET_GPR_U32(ctx, 31, 0x2C4578u);
    ctx->pc = 0x2AB9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraCalc_0x2ab9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4578u; }
    }
    if (ctx->pc != 0x2C4578u) { return; }
    ctx->pc = 0x2C4578u;
    // 0x2c4578: 0x8e260004
    ctx->pc = 0x2c4578u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c457c:
    // 0x2c457c: 0x200202d
    ctx->pc = 0x2c457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4580: 0x240282d
    ctx->pc = 0x2c4580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4584: 0xc0b626d
    ctx->pc = 0x2C4584u;
    SET_GPR_U32(ctx, 31, 0x2C458Cu);
    ctx->pc = 0x2C4588u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C458Cu; }
    }
    if (ctx->pc != 0x2C458Cu) { return; }
    ctx->pc = 0x2C458Cu;
    // 0x2c458c: 0x3c013f80
    ctx->pc = 0x2c458cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c4590: 0x44810800
    ctx->pc = 0x2c4590u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c4594: 0xc600000c
    ctx->pc = 0x2c4594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4598: 0x0
    ctx->pc = 0x2c4598u;
    // NOP
    // 0x2c459c: 0x0
    ctx->pc = 0x2c459cu;
    // NOP
    // 0x2c45a0: 0x46000843
    ctx->pc = 0x2c45a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c45a4: 0xc6000000
    ctx->pc = 0x2c45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c45a8: 0x46000802
    ctx->pc = 0x2c45a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c45ac: 0xe6000000
    ctx->pc = 0x2c45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c45b0: 0xc6000004
    ctx->pc = 0x2c45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c45b4: 0x46000802
    ctx->pc = 0x2c45b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c45b8: 0xe6000004
    ctx->pc = 0x2c45b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c45bc: 0xc6000008
    ctx->pc = 0x2c45bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c45c0: 0x46000842
    ctx->pc = 0x2c45c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c45c4: 0xe6010008
    ctx->pc = 0x2c45c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c45c8: 0xdfbf0030
    ctx->pc = 0x2c45c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c45cc: 0xdfb20020
    ctx->pc = 0x2c45ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c45d0: 0xdfb10010
    ctx->pc = 0x2c45d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c45d4: 0xdfb00000
    ctx->pc = 0x2c45d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c45d8: 0x3e00008
    ctx->pc = 0x2C45D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C45DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4558u: goto label_2c4558;
            case 0x2C4564u: goto label_2c4564;
            case 0x2C457Cu: goto label_2c457c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C45E0u;
}
