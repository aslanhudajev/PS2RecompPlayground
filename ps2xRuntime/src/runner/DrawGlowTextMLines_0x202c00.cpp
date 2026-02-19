#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawGlowTextMLines
// Address: 0x202c00 - 0x202ce0
void DrawGlowTextMLines_0x202c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202c00u;

    // 0x202c00: 0x27bdff50
    ctx->pc = 0x202c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x202c04: 0xffbf0090
    ctx->pc = 0x202c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x202c08: 0xffb40080
    ctx->pc = 0x202c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x202c0c: 0xffb30070
    ctx->pc = 0x202c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x202c10: 0xffb20060
    ctx->pc = 0x202c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x202c14: 0xffb10050
    ctx->pc = 0x202c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x202c18: 0xffb00040
    ctx->pc = 0x202c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x202c1c: 0xe7b400a0
    ctx->pc = 0x202c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x202c20: 0x80a02d
    ctx->pc = 0x202c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c24: 0xa0882d
    ctx->pc = 0x202c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c28: 0x46006506
    ctx->pc = 0x202c28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x202c2c: 0xc0802d
    ctx->pc = 0x202c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c30: 0x3c020031
    ctx->pc = 0x202c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202c34: 0xc080570
    ctx->pc = 0x202C34u;
    SET_GPR_U32(ctx, 31, 0x202C3Cu);
    ctx->pc = 0x202C38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294963872)));
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C3Cu; }
    }
    if (ctx->pc != 0x202C3Cu) { return; }
    ctx->pc = 0x202C3Cu;
    // 0x202c3c: 0x40982d
    ctx->pc = 0x202c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c40: 0x200202d
    ctx->pc = 0x202c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c44: 0x3c050031
    ctx->pc = 0x202c44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x202c48: 0x24a5f2a8
    ctx->pc = 0x202c48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963880));
    // 0x202c4c: 0xc0803e0
    ctx->pc = 0x202C4Cu;
    SET_GPR_U32(ctx, 31, 0x202C54u);
    ctx->pc = 0x202C50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixMLineText_0x200f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C54u; }
    }
    if (ctx->pc != 0x202C54u) { return; }
    ctx->pc = 0x202C54u;
    // 0x202c54: 0x6210007
    ctx->pc = 0x202C54u;
    {
        const bool branch_taken_0x202c54 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x202C58u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202c54) {
            ctx->pc = 0x202C74u;
            goto label_202c74;
        }
    }
    ctx->pc = 0x202C5Cu;
    // 0x202c5c: 0x118823
    ctx->pc = 0x202c5cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x202c60: 0x2721018
    ctx->pc = 0x202c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202c64: 0x21fc2
    ctx->pc = 0x202c64u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x202c68: 0x431021
    ctx->pc = 0x202c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202c6c: 0x21043
    ctx->pc = 0x202c6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x202c70: 0x2228823
    ctx->pc = 0x202c70u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_202c74:
    // 0x202c74: 0x1a40000d
    ctx->pc = 0x202C74u;
    {
        const bool branch_taken_0x202c74 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x202C78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202c74) {
            ctx->pc = 0x202CACu;
            goto label_202cac;
        }
    }
    ctx->pc = 0x202C7Cu;
    // 0x202c7c: 0x0
    ctx->pc = 0x202c7cu;
    // NOP
label_202c80:
    // 0x202c80: 0x101080
    ctx->pc = 0x202c80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x202c84: 0x3a21021
    ctx->pc = 0x202c84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x202c88: 0x280202d
    ctx->pc = 0x202c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c8c: 0x220282d
    ctx->pc = 0x202c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c90: 0x4600a306
    ctx->pc = 0x202c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202c94: 0xc080a9a
    ctx->pc = 0x202C94u;
    SET_GPR_U32(ctx, 31, 0x202C9Cu);
    ctx->pc = 0x202C98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C9Cu; }
    }
    if (ctx->pc != 0x202C9Cu) { return; }
    ctx->pc = 0x202C9Cu;
    // 0x202c9c: 0x26100001
    ctx->pc = 0x202c9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x202ca0: 0x212102a
    ctx->pc = 0x202ca0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x202ca4: 0x1440fff6
    ctx->pc = 0x202CA4u;
    {
        const bool branch_taken_0x202ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x202CA8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        if (branch_taken_0x202ca4) {
            ctx->pc = 0x202C80u;
            goto label_202c80;
        }
    }
    ctx->pc = 0x202CACu;
label_202cac:
    // 0x202cac: 0x3c040031
    ctx->pc = 0x202cacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x202cb0: 0x2531018
    ctx->pc = 0x202cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202cb4: 0x2221821
    ctx->pc = 0x202cb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x202cb8: 0xac83f284
    ctx->pc = 0x202cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963844), GPR_U32(ctx, 3));
    // 0x202cbc: 0xdfbf0090
    ctx->pc = 0x202cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x202cc0: 0xdfb40080
    ctx->pc = 0x202cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202cc4: 0xdfb30070
    ctx->pc = 0x202cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202cc8: 0xdfb20060
    ctx->pc = 0x202cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202ccc: 0xdfb10050
    ctx->pc = 0x202cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202cd0: 0xdfb00040
    ctx->pc = 0x202cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202cd4: 0xc7b400a0
    ctx->pc = 0x202cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202cd8: 0x3e00008
    ctx->pc = 0x202CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202C74u: goto label_202c74;
            case 0x202C80u: goto label_202c80;
            case 0x202CACu: goto label_202cac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202CE0u;
}
