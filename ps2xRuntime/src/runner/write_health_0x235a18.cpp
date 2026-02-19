#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: write_health
// Address: 0x235a18 - 0x235b54
void write_health_0x235a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x235a18u;

    // 0x235a18: 0x27bdffc0
    ctx->pc = 0x235a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235a1c: 0xffbf0030
    ctx->pc = 0x235a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235a20: 0xffb10020
    ctx->pc = 0x235a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x235a24: 0xffb00010
    ctx->pc = 0x235a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x235a28: 0x80882d
    ctx->pc = 0x235a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a2c: 0x24032b00
    ctx->pc = 0x235a2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x235a30: 0x2231818
    ctx->pc = 0x235a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235a34: 0x3c020032
    ctx->pc = 0x235a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x235a38: 0x24421bc0
    ctx->pc = 0x235a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x235a3c: 0x628021
    ctx->pc = 0x235a3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235a40: 0x3c030033
    ctx->pc = 0x235a40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x235a44: 0x2463c908
    ctx->pc = 0x235a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x235a48: 0x24020018
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x235a4c: 0x2221018
    ctx->pc = 0x235a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235a50: 0x621821
    ctx->pc = 0x235a50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235a54: 0x8c620014
    ctx->pc = 0x235a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x235a58: 0x1040003a
    ctx->pc = 0x235A58u;
    {
        const bool branch_taken_0x235a58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235A5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x235a58) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x235A60u;
    // 0x235a60: 0xc6001a10
    ctx->pc = 0x235a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235a64: 0x3c01461c
    ctx->pc = 0x235a64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x235a68: 0x34213c00
    ctx->pc = 0x235a68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
    // 0x235a6c: 0x44810800
    ctx->pc = 0x235a6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x235a70: 0x46000834
    ctx->pc = 0x235a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235a74: 0x0
    ctx->pc = 0x235a74u;
    // NOP
    // 0x235a78: 0x45030001
    ctx->pc = 0x235A78u;
    {
        const bool branch_taken_0x235a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x235a78) {
            ctx->pc = 0x235A7Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
            ctx->pc = 0x235A80u;
            goto label_235a80;
        }
    }
    ctx->pc = 0x235A80u;
label_235a80:
    // 0x235a80: 0x10a00027
    ctx->pc = 0x235A80u;
    {
        const bool branch_taken_0x235a80 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x235A84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x235a80) {
            ctx->pc = 0x235B20u;
            goto label_235b20;
        }
    }
    ctx->pc = 0x235A88u;
    // 0x235a88: 0xc6001a10
    ctx->pc = 0x235a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235a8c: 0x3c05003a
    ctx->pc = 0x235a8cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x235a90: 0x46000064
    ctx->pc = 0x235a90u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x235a94: 0x44060800
    ctx->pc = 0x235a94u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x235a98: 0xc0b6252
    ctx->pc = 0x235A98u;
    SET_GPR_U32(ctx, 31, 0x235AA0u);
    ctx->pc = 0x235A9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31120));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AA0u; }
    }
    if (ctx->pc != 0x235AA0u) { return; }
    ctx->pc = 0x235AA0u;
    // 0x235aa0: 0x3a0202d
    ctx->pc = 0x235aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235aa4: 0x3c013f80
    ctx->pc = 0x235aa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x235aa8: 0x44816000
    ctx->pc = 0x235aa8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x235aac: 0xc080552
    ctx->pc = 0x235AACu;
    SET_GPR_U32(ctx, 31, 0x235AB4u);
    ctx->pc = 0x235AB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AB4u; }
    }
    if (ctx->pc != 0x235AB4u) { return; }
    ctx->pc = 0x235AB4u;
    // 0x235ab4: 0x3c040032
    ctx->pc = 0x235ab4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x235ab8: 0x248415d0
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5584));
    // 0x235abc: 0x111840
    ctx->pc = 0x235abcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x235ac0: 0x641821
    ctx->pc = 0x235ac0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x235ac4: 0x94640000
    ctx->pc = 0x235ac4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235ac8: 0x2442ff8c
    ctx->pc = 0x235ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967180));
    // 0x235acc: 0x3c030032
    ctx->pc = 0x235accu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x235ad0: 0x24631550
    ctx->pc = 0x235ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5456));
    // 0x235ad4: 0x8e070004
    ctx->pc = 0x235ad4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235ad8: 0x73880
    ctx->pc = 0x235ad8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x235adc: 0xe33821
    ctx->pc = 0x235adcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x235ae0: 0x822023
    ctx->pc = 0x235ae0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235ae4: 0x24050167
    ctx->pc = 0x235ae4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 359));
    // 0x235ae8: 0x24060004
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x235aec: 0x8ce70000
    ctx->pc = 0x235aecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x235af0: 0xc0804c8
    ctx->pc = 0x235AF0u;
    SET_GPR_U32(ctx, 31, 0x235AF8u);
    ctx->pc = 0x235AF4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235AF8u; }
    }
    if (ctx->pc != 0x235AF8u) { return; }
    ctx->pc = 0x235AF8u;
    // 0x235af8: 0x3c030033
    ctx->pc = 0x235af8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x235afc: 0x2463c908
    ctx->pc = 0x235afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x235b00: 0x24020018
    ctx->pc = 0x235b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x235b04: 0x2221018
    ctx->pc = 0x235b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235b08: 0x621821
    ctx->pc = 0x235b08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235b0c: 0x8c640014
    ctx->pc = 0x235b0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x235b10: 0xc0b0ce8
    ctx->pc = 0x235B10u;
    SET_GPR_U32(ctx, 31, 0x235B18u);
    ctx->pc = 0x235B14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B18u; }
    }
    if (ctx->pc != 0x235B18u) { return; }
    ctx->pc = 0x235B18u;
    // 0x235b18: 0x1000000a
    ctx->pc = 0x235B18u;
    {
        const bool branch_taken_0x235b18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235B1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x235b18) {
            ctx->pc = 0x235B44u;
            goto label_235b44;
        }
    }
    ctx->pc = 0x235B20u;
label_235b20:
    // 0x235b20: 0x3c030033
    ctx->pc = 0x235b20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x235b24: 0x2463c908
    ctx->pc = 0x235b24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x235b28: 0x24020018
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x235b2c: 0x2221018
    ctx->pc = 0x235b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235b30: 0x621821
    ctx->pc = 0x235b30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235b34: 0x8c640014
    ctx->pc = 0x235b34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x235b38: 0xc0b0ce8
    ctx->pc = 0x235B38u;
    SET_GPR_U32(ctx, 31, 0x235B40u);
    ctx->pc = 0x235B3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B40u; }
    }
    if (ctx->pc != 0x235B40u) { return; }
    ctx->pc = 0x235B40u;
    // 0x235b40: 0xdfbf0030
    ctx->pc = 0x235b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235b44:
    // 0x235b44: 0xdfb10020
    ctx->pc = 0x235b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235b48: 0xdfb00010
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b4c: 0x3e00008
    ctx->pc = 0x235B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235A80u: goto label_235a80;
            case 0x235B20u: goto label_235b20;
            case 0x235B44u: goto label_235b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235B54u;
}
