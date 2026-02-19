#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncProj
// Address: 0x2b61d8 - 0x2b62a8
void efuncProj_0x2b61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b61d8u;

    // 0x2b61d8: 0x27bdffe0
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b61dc: 0xffbf0010
    ctx->pc = 0x2b61dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b61e0: 0xffb00000
    ctx->pc = 0x2b61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b61e4: 0x8c900010
    ctx->pc = 0x2b61e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b61e8: 0x8e030000
    ctx->pc = 0x2b61e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b61ec: 0x24020002
    ctx->pc = 0x2b61ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b61f0: 0x10620019
    ctx->pc = 0x2B61F0u;
    {
        const bool branch_taken_0x2b61f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B61F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b61f0) {
            ctx->pc = 0x2B6258u;
            goto label_2b6258;
        }
    }
    ctx->pc = 0x2B61F8u;
    // 0x2b61f8: 0x24020020
    ctx->pc = 0x2b61f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b61fc: 0xaca20000
    ctx->pc = 0x2b61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b6200: 0x3c04003b
    ctx->pc = 0x2b6200u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6204: 0x24844650
    ctx->pc = 0x2b6204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b6208: 0x24050020
    ctx->pc = 0x2b6208u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b620c: 0x3c06003b
    ctx->pc = 0x2b620cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b6210: 0x24c60d80
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b6214: 0xc0ad0d6
    ctx->pc = 0x2B6214u;
    SET_GPR_U32(ctx, 31, 0x2B621Cu);
    ctx->pc = 0x2B6218u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B621Cu; }
    }
    if (ctx->pc != 0x2B621Cu) { return; }
    ctx->pc = 0x2B621Cu;
    // 0x2b621c: 0xc0ad082
    ctx->pc = 0x2B621Cu;
    SET_GPR_U32(ctx, 31, 0x2B6224u);
    ctx->pc = 0x2B6220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6224u; }
    }
    if (ctx->pc != 0x2B6224u) { return; }
    ctx->pc = 0x2B6224u;
    // 0x2b6224: 0x3c04003b
    ctx->pc = 0x2b6224u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6228: 0x24844db8
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19896));
    // 0x2b622c: 0xc0b4a34
    ctx->pc = 0x2B622Cu;
    SET_GPR_U32(ctx, 31, 0x2B6234u);
    ctx->pc = 0x2B6230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6234u; }
    }
    if (ctx->pc != 0x2B6234u) { return; }
    ctx->pc = 0x2B6234u;
    // 0x2b6234: 0x3c04003b
    ctx->pc = 0x2b6234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6238: 0xc0b4a34
    ctx->pc = 0x2B6238u;
    SET_GPR_U32(ctx, 31, 0x2B6240u);
    ctx->pc = 0x2B623Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6240u; }
    }
    if (ctx->pc != 0x2B6240u) { return; }
    ctx->pc = 0x2B6240u;
    // 0x2b6240: 0x3c020037
    ctx->pc = 0x2b6240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b6244: 0x8c4320ac
    ctx->pc = 0x2b6244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b6248: 0x8c620048
    ctx->pc = 0x2b6248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b624c: 0x34420001
    ctx->pc = 0x2b624cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b6250: 0x10000011
    ctx->pc = 0x2B6250u;
    {
        const bool branch_taken_0x2b6250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6254u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2b6250) {
            ctx->pc = 0x2B6298u;
            goto label_2b6298;
        }
    }
    ctx->pc = 0x2B6258u;
label_2b6258:
    // 0x2b6258: 0x3c013f80
    ctx->pc = 0x2b6258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2b625c: 0x44810800
    ctx->pc = 0x2b625cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2b6260: 0xc600001c
    ctx->pc = 0x2b6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6264: 0x0
    ctx->pc = 0x2b6264u;
    // NOP
    // 0x2b6268: 0x0
    ctx->pc = 0x2b6268u;
    // NOP
    // 0x2b626c: 0x46000843
    ctx->pc = 0x2b626cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2b6270: 0xc6000010
    ctx->pc = 0x2b6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6274: 0x46000802
    ctx->pc = 0x2b6274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6278: 0xe4a00010
    ctx->pc = 0x2b6278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2b627c: 0xc6000014
    ctx->pc = 0x2b627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6280: 0x46000802
    ctx->pc = 0x2b6280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6284: 0xe4a00014
    ctx->pc = 0x2b6284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2b6288: 0xc6000018
    ctx->pc = 0x2b6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b628c: 0x46000802
    ctx->pc = 0x2b628cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6290: 0xe4a00018
    ctx->pc = 0x2b6290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2b6294: 0xe4a1001c
    ctx->pc = 0x2b6294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2b6298:
    // 0x2b6298: 0xdfbf0010
    ctx->pc = 0x2b6298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b629c: 0xdfb00000
    ctx->pc = 0x2b629cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b62a0: 0x3e00008
    ctx->pc = 0x2B62A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6258u: goto label_2b6258;
            case 0x2B6298u: goto label_2b6298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B62A8u;
}
