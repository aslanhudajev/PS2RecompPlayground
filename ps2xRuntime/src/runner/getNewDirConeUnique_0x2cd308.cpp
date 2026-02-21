#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewDirConeUnique
// Address: 0x2cd308 - 0x2cd3b8
void getNewDirConeUnique_0x2cd308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd308u;

    // 0x2cd308: 0x27bdff70
    ctx->pc = 0x2cd308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cd30c: 0xffbf0080
    ctx->pc = 0x2cd30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2cd310: 0xffb40070
    ctx->pc = 0x2cd310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2cd314: 0xffb30060
    ctx->pc = 0x2cd314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2cd318: 0xffb20050
    ctx->pc = 0x2cd318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2cd31c: 0xffb10040
    ctx->pc = 0x2cd31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2cd320: 0xffb00030
    ctx->pc = 0x2cd320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cd324: 0x80902d
    ctx->pc = 0x2cd324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd328: 0xa0a02d
    ctx->pc = 0x2cd328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd32c: 0x96440030
    ctx->pc = 0x2cd32cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2cd330: 0x2645001c
    ctx->pc = 0x2cd330u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 28));
    // 0x2cd334: 0xc0b330e
    ctx->pc = 0x2CD334u;
    SET_GPR_U32(ctx, 31, 0x2CD33Cu);
    ctx->pc = 0x2CD338u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    ctx->pc = 0x2CCC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getUniqueIdx_0x2ccc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD33Cu; }
    }
    if (ctx->pc != 0x2CD33Cu) { return; }
    ctx->pc = 0x2CD33Cu;
    // 0x2cd33c: 0x40982d
    ctx->pc = 0x2cd33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd340: 0x6600015
    ctx->pc = 0x2CD340u;
    {
        const bool branch_taken_0x2cd340 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2CD344u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2cd340) {
            ctx->pc = 0x2CD398u;
            goto label_2cd398;
        }
    }
    ctx->pc = 0x2CD348u;
    // 0x2cd348: 0x240202d
    ctx->pc = 0x2cd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd34c: 0x280282d
    ctx->pc = 0x2cd34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd350: 0xc0b325e
    ctx->pc = 0x2CD350u;
    SET_GPR_U32(ctx, 31, 0x2CD358u);
    ctx->pc = 0x2CD354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CC978u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCurrentDir_0x2cc978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD358u; }
    }
    if (ctx->pc != 0x2CD358u) { return; }
    ctx->pc = 0x2CD358u;
    // 0x2cd358: 0x27b10010
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cd35c: 0x3a0202d
    ctx->pc = 0x2cd35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd360: 0x220282d
    ctx->pc = 0x2cd360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd364: 0xc0b32a6
    ctx->pc = 0x2CD364u;
    SET_GPR_U32(ctx, 31, 0x2CD36Cu);
    ctx->pc = 0x2CD368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CCA98u;
    {
        const uint32_t __entryPc = ctx->pc;
        getOrthoVecs_0x2cca98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD36Cu; }
    }
    if (ctx->pc != 0x2CD36Cu) { return; }
    ctx->pc = 0x2CD36Cu;
    // 0x2cd36c: 0x2404000c
    ctx->pc = 0x2cd36cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd370: 0x2642018
    ctx->pc = 0x2cd370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cd374: 0x8e42000c
    ctx->pc = 0x2cd374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cd378: 0x822021
    ctx->pc = 0x2cd378u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd37c: 0x280282d
    ctx->pc = 0x2cd37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd380: 0xc64c0040
    ctx->pc = 0x2cd380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd384: 0x200302d
    ctx->pc = 0x2cd384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd388: 0x3a0382d
    ctx->pc = 0x2cd388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd38c: 0xc0b345a
    ctx->pc = 0x2CD38Cu;
    SET_GPR_U32(ctx, 31, 0x2CD394u);
    ctx->pc = 0x2CD390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CD168u;
    {
        const uint32_t __entryPc = ctx->pc;
        getConeDir_0x2cd168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD394u; }
    }
    if (ctx->pc != 0x2CD394u) { return; }
    ctx->pc = 0x2CD394u;
    // 0x2cd394: 0x260102d
    ctx->pc = 0x2cd394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cd398:
    // 0x2cd398: 0xdfbf0080
    ctx->pc = 0x2cd398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cd39c: 0xdfb40070
    ctx->pc = 0x2cd39cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cd3a0: 0xdfb30060
    ctx->pc = 0x2cd3a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd3a4: 0xdfb20050
    ctx->pc = 0x2cd3a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd3a8: 0xdfb10040
    ctx->pc = 0x2cd3a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd3ac: 0xdfb00030
    ctx->pc = 0x2cd3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd3b0: 0x3e00008
    ctx->pc = 0x2CD3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD3B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD398u: goto label_2cd398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD3B8u;
}
