#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: test_location
// Address: 0x24cbb0 - 0x24cc2c
void test_location_0x24cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24cbb0u;

    // 0x24cbb0: 0x27bdffe0
    ctx->pc = 0x24cbb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24cbb4: 0xffbf0010
    ctx->pc = 0x24cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24cbb8: 0xffb00000
    ctx->pc = 0x24cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cbbc: 0x80802d
    ctx->pc = 0x24cbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbc0: 0x3c020034
    ctx->pc = 0x24cbc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24cbc4: 0x3c013f00
    ctx->pc = 0x24cbc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24cbc8: 0x44810000
    ctx->pc = 0x24cbc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24cbcc: 0x46006342
    ctx->pc = 0x24cbccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x24cbd0: 0xc44ce88c
    ctx->pc = 0x24cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24cbd4: 0xc087b5c
    ctx->pc = 0x24CBD4u;
    SET_GPR_U32(ctx, 31, 0x24CBDCu);
    ctx->pc = 0x24CBD8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBDCu; }
    }
    if (ctx->pc != 0x24CBDCu) { return; }
    ctx->pc = 0x24CBDCu;
    // 0x24cbdc: 0x3c020032
    ctx->pc = 0x24cbdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24cbe0: 0x8c42fbf4
    ctx->pc = 0x24cbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x24cbe4: 0x1040000a
    ctx->pc = 0x24CBE4u;
    {
        const bool branch_taken_0x24cbe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CBE8u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x24cbe4) {
            ctx->pc = 0x24CC10u;
            goto label_24cc10;
        }
    }
    ctx->pc = 0x24CBECu;
    // 0x24cbec: 0xc6000004
    ctx->pc = 0x24cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cbf0: 0x46001001
    ctx->pc = 0x24cbf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24cbf4: 0x46000005
    ctx->pc = 0x24cbf4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24cbf8: 0x3c014040
    ctx->pc = 0x24cbf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x24cbfc: 0x44810800
    ctx->pc = 0x24cbfcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x24cc00: 0x46000834
    ctx->pc = 0x24cc00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cc04: 0x0
    ctx->pc = 0x24cc04u;
    // NOP
    // 0x24cc08: 0x45020003
    ctx->pc = 0x24CC08u;
    {
        const bool branch_taken_0x24cc08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24cc08) {
            ctx->pc = 0x24CC0Cu;
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->pc = 0x24CC18u;
            goto label_24cc18;
        }
    }
    ctx->pc = 0x24CC10u;
label_24cc10:
    // 0x24cc10: 0x10000002
    ctx->pc = 0x24CC10u;
    {
        const bool branch_taken_0x24cc10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CC14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cc10) {
            ctx->pc = 0x24CC1Cu;
            goto label_24cc1c;
        }
    }
    ctx->pc = 0x24CC18u;
label_24cc18:
    // 0x24cc18: 0x24020001
    ctx->pc = 0x24cc18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_24cc1c:
    // 0x24cc1c: 0xdfbf0010
    ctx->pc = 0x24cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cc20: 0xdfb00000
    ctx->pc = 0x24cc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc24: 0x3e00008
    ctx->pc = 0x24CC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CC28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CC10u: goto label_24cc10;
            case 0x24CC18u: goto label_24cc18;
            case 0x24CC1Cu: goto label_24cc1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24CC2Cu;
}
