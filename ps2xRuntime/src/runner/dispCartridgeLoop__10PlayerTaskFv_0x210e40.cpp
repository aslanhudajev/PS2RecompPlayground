#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispCartridgeLoop__10PlayerTaskFv
// Address: 0x210e40 - 0x210f00
void dispCartridgeLoop__10PlayerTaskFv_0x210e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispCartridgeLoop__10PlayerTaskFv");


    ctx->pc = 0x210e40u;

    // 0x210e40: 0x27bdffe0
    ctx->pc = 0x210e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210e44: 0x7fbf0010
    ctx->pc = 0x210e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x210e48: 0x7fb00000
    ctx->pc = 0x210e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210e4c: 0x70808628
    ctx->pc = 0x210e4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x210e50: 0x3c020050
    ctx->pc = 0x210e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x210e54: 0xc07ce18
    ctx->pc = 0x210E54u;
    SET_GPR_U32(ctx, 31, 0x210E5Cu);
    ctx->pc = 0x210E58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E5Cu; }
        else if (ctx->pc != 0x210E5Cu) { ctx->pc = 0x210E5Cu; }
    }
    if (ctx->pc != 0x210E5Cu) { return; }
    ctx->pc = 0x210E5Cu;
    // 0x210e5c: 0x1c400024
    ctx->pc = 0x210E5Cu;
    {
        const bool branch_taken_0x210e5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x210E60u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 9444));
        if (branch_taken_0x210e5c) {
            ctx->pc = 0x210EF0u;
            goto label_210ef0;
        }
    }
    ctx->pc = 0x210E64u;
    // 0x210e64: 0x70002e28
    ctx->pc = 0x210e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210e68: 0x3c03b7a7
    ctx->pc = 0x210e68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47015 << 16));
    // 0x210e6c: 0x3463c5ac
    ctx->pc = 0x210e6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210e70: 0x44830800
    ctx->pc = 0x210e70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_210e74:
    // 0x210e74: 0x8cc30018
    ctx->pc = 0x210e74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x210e78: 0x5060001a
    ctx->pc = 0x210E78u;
    {
        const bool branch_taken_0x210e78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x210e78) {
            ctx->pc = 0x210E7Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x210EE4u;
            goto label_210ee4;
        }
    }
    ctx->pc = 0x210E80u;
    // 0x210e80: 0xc4c2000c
    ctx->pc = 0x210e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x210e84: 0xc4c00000
    ctx->pc = 0x210e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210e88: 0x46020000
    ctx->pc = 0x210e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x210e8c: 0xe4c00000
    ctx->pc = 0x210e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x210e90: 0xc4c20010
    ctx->pc = 0x210e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x210e94: 0xc4c00004
    ctx->pc = 0x210e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210e98: 0x46020000
    ctx->pc = 0x210e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x210e9c: 0xe4c00004
    ctx->pc = 0x210e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x210ea0: 0x8cc40024
    ctx->pc = 0x210ea0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x210ea4: 0x8cc30028
    ctx->pc = 0x210ea4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x210ea8: 0x831821
    ctx->pc = 0x210ea8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210eac: 0xacc30024
    ctx->pc = 0x210eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x210eb0: 0xc4c00010
    ctx->pc = 0x210eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210eb4: 0x46010000
    ctx->pc = 0x210eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x210eb8: 0xe4c00010
    ctx->pc = 0x210eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x210ebc: 0x8cc3001c
    ctx->pc = 0x210ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x210ec0: 0x24630001
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x210ec4: 0xacc3001c
    ctx->pc = 0x210ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x210ec8: 0x8cc3001c
    ctx->pc = 0x210ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x210ecc: 0x28610079
    ctx->pc = 0x210eccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 121));
    // 0x210ed0: 0x14200003
    ctx->pc = 0x210ED0u;
    {
        const bool branch_taken_0x210ed0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x210ed0) {
            ctx->pc = 0x210EE0u;
            goto label_210ee0;
        }
    }
    ctx->pc = 0x210ED8u;
    // 0x210ed8: 0xacc0001c
    ctx->pc = 0x210ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x210edc: 0xacc00018
    ctx->pc = 0x210edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_210ee0:
    // 0x210ee0: 0x24a50001
    ctx->pc = 0x210ee0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_210ee4:
    // 0x210ee4: 0x28a30012
    ctx->pc = 0x210ee4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 18));
    // 0x210ee8: 0x1460ffe2
    ctx->pc = 0x210EE8u;
    {
        const bool branch_taken_0x210ee8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x210EECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 44));
        if (branch_taken_0x210ee8) {
            ctx->pc = 0x210E74u;
            goto label_210e74;
        }
    }
    ctx->pc = 0x210EF0u;
label_210ef0:
    // 0x210ef0: 0x7bbf0010
    ctx->pc = 0x210ef0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ef4: 0x7bb00000
    ctx->pc = 0x210ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ef8: 0x3e00008
    ctx->pc = 0x210EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210EFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210E74u: goto label_210e74;
            case 0x210EE0u: goto label_210ee0;
            case 0x210EE4u: goto label_210ee4;
            case 0x210EF0u: goto label_210ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210F00u;
}
