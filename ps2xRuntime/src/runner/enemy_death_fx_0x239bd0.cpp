#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_death_fx
// Address: 0x239bd0 - 0x239ccc
void enemy_death_fx_0x239bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239bd0u;

    // 0x239bd0: 0x27bdff90
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x239bd4: 0xffbf0060
    ctx->pc = 0x239bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x239bd8: 0xffb00050
    ctx->pc = 0x239bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x239bdc: 0x84820288
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x239be0: 0x4400004
    ctx->pc = 0x239BE0u;
    {
        const bool branch_taken_0x239be0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x239BE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239be0) {
            ctx->pc = 0x239BF4u;
            goto label_239bf4;
        }
    }
    ctx->pc = 0x239BE8u;
    // 0x239be8: 0x24032b00
    ctx->pc = 0x239be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x239bec: 0x10000017
    ctx->pc = 0x239BECu;
    {
        const bool branch_taken_0x239bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239BF0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x239bec) {
            ctx->pc = 0x239C4Cu;
            goto label_239c4c;
        }
    }
    ctx->pc = 0x239BF4u;
label_239bf4:
    // 0x239bf4: 0x24020001
    ctx->pc = 0x239bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x239bf8: 0x3c030032
    ctx->pc = 0x239bf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x239bfc: 0x8c631cbc
    ctx->pc = 0x239bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 7356)));
    // 0x239c00: 0x1062000e
    ctx->pc = 0x239C00u;
    {
        const bool branch_taken_0x239c00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x239C04u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239c00) {
            ctx->pc = 0x239C3Cu;
            goto label_239c3c;
        }
    }
    ctx->pc = 0x239C08u;
    // 0x239c08: 0x3c020032
    ctx->pc = 0x239c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x239c0c: 0x24491bc0
    ctx->pc = 0x239c0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x239c10: 0x24072b00
    ctx->pc = 0x239c10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x239c14: 0x24030001
    ctx->pc = 0x239c14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c18: 0x24a50001
    ctx->pc = 0x239c18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x239c1c: 0x0
    ctx->pc = 0x239c1cu;
    // NOP
label_239c20:
    // 0x239c20: 0x28a20004
    ctx->pc = 0x239c20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x239c24: 0x1040000c
    ctx->pc = 0x239C24u;
    {
        const bool branch_taken_0x239c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239C28u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x239c24) {
            ctx->pc = 0x239C58u;
            goto label_239c58;
        }
    }
    ctx->pc = 0x239C2Cu;
    // 0x239c2c: 0x1091021
    ctx->pc = 0x239c2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x239c30: 0x8c4200fc
    ctx->pc = 0x239c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x239c34: 0x5443fffa
    ctx->pc = 0x239C34u;
    {
        const bool branch_taken_0x239c34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x239c34) {
            ctx->pc = 0x239C38u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x239C20u;
            goto label_239c20;
        }
    }
    ctx->pc = 0x239C3Cu;
label_239c3c:
    // 0x239c3c: 0x28a20004
    ctx->pc = 0x239c3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x239c40: 0x10400005
    ctx->pc = 0x239C40u;
    {
        const bool branch_taken_0x239c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239C44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x239c40) {
            ctx->pc = 0x239C58u;
            goto label_239c58;
        }
    }
    ctx->pc = 0x239C48u;
    // 0x239c48: 0xa31818
    ctx->pc = 0x239c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_239c4c:
    // 0x239c4c: 0x3c020032
    ctx->pc = 0x239c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x239c50: 0x24421bc0
    ctx->pc = 0x239c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x239c54: 0x623021
    ctx->pc = 0x239c54u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239c58:
    // 0x239c58: 0x10c00018
    ctx->pc = 0x239C58u;
    {
        const bool branch_taken_0x239c58 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x239C5Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x239c58) {
            ctx->pc = 0x239CBCu;
            goto label_239cbc;
        }
    }
    ctx->pc = 0x239C60u;
    // 0x239c60: 0xc4810040
    ctx->pc = 0x239c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239c64: 0xe7a10030
    ctx->pc = 0x239c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x239c68: 0xc4820044
    ctx->pc = 0x239c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239c6c: 0xe7a20034
    ctx->pc = 0x239c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x239c70: 0xc4830048
    ctx->pc = 0x239c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239c74: 0xe7a30038
    ctx->pc = 0x239c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x239c78: 0xc4c00050
    ctx->pc = 0x239c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239c7c: 0x46010001
    ctx->pc = 0x239c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x239c80: 0xe7a00040
    ctx->pc = 0x239c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x239c84: 0xc4c00054
    ctx->pc = 0x239c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239c88: 0x46020001
    ctx->pc = 0x239c88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x239c8c: 0xe7a00044
    ctx->pc = 0x239c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x239c90: 0xc4c00058
    ctx->pc = 0x239c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239c94: 0x46030001
    ctx->pc = 0x239c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x239c98: 0xe7a00048
    ctx->pc = 0x239c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x239c9c: 0xc0b58a4
    ctx->pc = 0x239C9Cu;
    SET_GPR_U32(ctx, 31, 0x239CA4u);
    ctx->pc = 0x239CA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CA4u; }
    }
    if (ctx->pc != 0x239CA4u) { return; }
    ctx->pc = 0x239CA4u;
    // 0x239ca4: 0x3a0202d
    ctx->pc = 0x239ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ca8: 0x200282d
    ctx->pc = 0x239ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cac: 0xc0b5978
    ctx->pc = 0x239CACu;
    SET_GPR_U32(ctx, 31, 0x239CB4u);
    ctx->pc = 0x239CB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D65E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDirMatrix_0x2d65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CB4u; }
    }
    if (ctx->pc != 0x239CB4u) { return; }
    ctx->pc = 0x239CB4u;
    // 0x239cb4: 0xc09fd24
    ctx->pc = 0x239CB4u;
    SET_GPR_U32(ctx, 31, 0x239CBCu);
    ctx->pc = 0x239CB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F490u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyDeathFX_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CBCu; }
    }
    if (ctx->pc != 0x239CBCu) { return; }
    ctx->pc = 0x239CBCu;
label_239cbc:
    // 0x239cbc: 0xdfbf0060
    ctx->pc = 0x239cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239cc0: 0xdfb00050
    ctx->pc = 0x239cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239cc4: 0x3e00008
    ctx->pc = 0x239CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239CC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239BF4u: goto label_239bf4;
            case 0x239C20u: goto label_239c20;
            case 0x239C3Cu: goto label_239c3c;
            case 0x239C4Cu: goto label_239c4c;
            case 0x239C58u: goto label_239c58;
            case 0x239CBCu: goto label_239cbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239CCCu;
}
