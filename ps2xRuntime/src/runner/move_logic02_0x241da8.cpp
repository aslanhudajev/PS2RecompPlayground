#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic02
// Address: 0x241da8 - 0x241fbc
void move_logic02_0x241da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x241da8u;

    // 0x241da8: 0x27bdffd0
    ctx->pc = 0x241da8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x241dac: 0xffbf0020
    ctx->pc = 0x241dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x241db0: 0xffb10010
    ctx->pc = 0x241db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x241db4: 0xffb00000
    ctx->pc = 0x241db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241db8: 0x80882d
    ctx->pc = 0x241db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241dbc: 0x240303b0
    ctx->pc = 0x241dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x241dc0: 0x2231818
    ctx->pc = 0x241dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241dc4: 0x3c020033
    ctx->pc = 0x241dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x241dc8: 0x2442dfd0
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x241dcc: 0xc08ed18
    ctx->pc = 0x241DCCu;
    SET_GPR_U32(ctx, 31, 0x241DD4u);
    ctx->pc = 0x241DD0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DD4u; }
    }
    if (ctx->pc != 0x241DD4u) { return; }
    ctx->pc = 0x241DD4u;
    // 0x241dd4: 0x50400009
    ctx->pc = 0x241DD4u;
    {
        const bool branch_taken_0x241dd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x241dd4) {
            ctx->pc = 0x241DD8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x241DFCu;
            goto label_241dfc;
        }
    }
    ctx->pc = 0x241DDCu;
    // 0x241ddc: 0x24020018
    ctx->pc = 0x241ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x241de0: 0xa6020324
    ctx->pc = 0x241de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x241de4: 0x220202d
    ctx->pc = 0x241de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241de8: 0xdfbf0020
    ctx->pc = 0x241de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241dec: 0xdfb10010
    ctx->pc = 0x241decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241df0: 0xdfb00000
    ctx->pc = 0x241df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241df4: 0x809095a
    ctx->pc = 0x241DF4u;
    ctx->pc = 0x241DF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x241DFCu;
label_241dfc:
    // 0x241dfc: 0x440000e
    ctx->pc = 0x241DFCu;
    {
        const bool branch_taken_0x241dfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x241dfc) {
            ctx->pc = 0x241E38u;
            goto label_241e38;
        }
    }
    ctx->pc = 0x241E04u;
    // 0x241e04: 0xc601028c
    ctx->pc = 0x241e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241e08: 0x3c014100
    ctx->pc = 0x241e08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x241e0c: 0x44810000
    ctx->pc = 0x241e0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241e10: 0x46000836
    ctx->pc = 0x241e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241e14: 0x0
    ctx->pc = 0x241e14u;
    // NOP
    // 0x241e18: 0x45000007
    ctx->pc = 0x241E18u;
    {
        const bool branch_taken_0x241e18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241E1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x241e18) {
            ctx->pc = 0x241E38u;
            goto label_241e38;
        }
    }
    ctx->pc = 0x241E20u;
    // 0x241e20: 0xa6000324
    ctx->pc = 0x241e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
    // 0x241e24: 0xdfbf0020
    ctx->pc = 0x241e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241e28: 0xdfb10010
    ctx->pc = 0x241e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241e2c: 0xdfb00000
    ctx->pc = 0x241e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241e30: 0x809095a
    ctx->pc = 0x241E30u;
    ctx->pc = 0x241E34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x241E38u;
label_241e38:
    // 0x241e38: 0x40034800
    ctx->pc = 0x241e38u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241e3c: 0x3c02003a
    ctx->pc = 0x241e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x241e40: 0x8c4221d0
    ctx->pc = 0x241e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241e44: 0xac430188
    ctx->pc = 0x241e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 3));
    // 0x241e48: 0x86030324
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x241e4c: 0x86020328
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x241e50: 0x50620004
    ctx->pc = 0x241E50u;
    {
        const bool branch_taken_0x241e50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x241e50) {
            ctx->pc = 0x241E54u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x241E64u;
            goto label_241e64;
        }
    }
    ctx->pc = 0x241E58u;
    // 0x241e58: 0xc08e210
    ctx->pc = 0x241E58u;
    SET_GPR_U32(ctx, 31, 0x241E60u);
    ctx->pc = 0x241E5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E60u; }
    }
    if (ctx->pc != 0x241E60u) { return; }
    ctx->pc = 0x241E60u;
    // 0x241e60: 0x8e03036c
    ctx->pc = 0x241e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_241e64:
    // 0x241e64: 0x1860002f
    ctx->pc = 0x241E64u;
    {
        const bool branch_taken_0x241e64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x241E68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x241e64) {
            ctx->pc = 0x241F24u;
            goto label_241f24;
        }
    }
    ctx->pc = 0x241E6Cu;
    // 0x241e6c: 0x8c42ffbc
    ctx->pc = 0x241e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x241e70: 0x621023
    ctx->pc = 0x241e70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241e74: 0x1c40002b
    ctx->pc = 0x241E74u;
    {
        const bool branch_taken_0x241e74 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x241E78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x241e74) {
            ctx->pc = 0x241F24u;
            goto label_241f24;
        }
    }
    ctx->pc = 0x241E7Cu;
    // 0x241e7c: 0xc6000260
    ctx->pc = 0x241e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241e80: 0x3c013f49
    ctx->pc = 0x241e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x241e84: 0x34210fdb
    ctx->pc = 0x241e84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241e88: 0x44810800
    ctx->pc = 0x241e88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241e8c: 0x46010040
    ctx->pc = 0x241e8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241e90: 0x3c014049
    ctx->pc = 0x241e90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x241e94: 0x34210fdb
    ctx->pc = 0x241e94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241e98: 0x44810000
    ctx->pc = 0x241e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241e9c: 0x46010034
    ctx->pc = 0x241e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241ea0: 0x0
    ctx->pc = 0x241ea0u;
    // NOP
    // 0x241ea4: 0x45000006
    ctx->pc = 0x241EA4u;
    {
        const bool branch_taken_0x241ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241EA8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x241ea4) {
            ctx->pc = 0x241EC0u;
            goto label_241ec0;
        }
    }
    ctx->pc = 0x241EACu;
    // 0x241eac: 0x3c0140c9
    ctx->pc = 0x241eacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241eb0: 0x34210fdb
    ctx->pc = 0x241eb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241eb4: 0x44810000
    ctx->pc = 0x241eb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241eb8: 0x1000000d
    ctx->pc = 0x241EB8u;
    {
        const bool branch_taken_0x241eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241EBCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x241eb8) {
            ctx->pc = 0x241EF0u;
            goto label_241ef0;
        }
    }
    ctx->pc = 0x241EC0u;
label_241ec0:
    // 0x241ec0: 0xc6010260
    ctx->pc = 0x241ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241ec4: 0x3c01c049
    ctx->pc = 0x241ec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x241ec8: 0x34210fdb
    ctx->pc = 0x241ec8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241ecc: 0x44810000
    ctx->pc = 0x241eccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241ed0: 0x46000836
    ctx->pc = 0x241ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241ed4: 0x0
    ctx->pc = 0x241ed4u;
    // NOP
    // 0x241ed8: 0x45020005
    ctx->pc = 0x241ED8u;
    {
        const bool branch_taken_0x241ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241ed8) {
            ctx->pc = 0x241EDCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x241EF0u;
            goto label_241ef0;
        }
    }
    ctx->pc = 0x241EE0u;
    // 0x241ee0: 0x3c0140c9
    ctx->pc = 0x241ee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241ee4: 0x34210fdb
    ctx->pc = 0x241ee4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241ee8: 0x44810000
    ctx->pc = 0x241ee8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241eec: 0x46000800
    ctx->pc = 0x241eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_241ef0:
    // 0x241ef0: 0xe6000260
    ctx->pc = 0x241ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241ef4: 0x8e020370
    ctx->pc = 0x241ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x241ef8: 0x24420001
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x241efc: 0xae020370
    ctx->pc = 0x241efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x241f00: 0x28420004
    ctx->pc = 0x241f00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x241f04: 0x54400008
    ctx->pc = 0x241F04u;
    {
        const bool branch_taken_0x241f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x241f04) {
            ctx->pc = 0x241F08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->pc = 0x241F28u;
            goto label_241f28;
        }
    }
    ctx->pc = 0x241F0Cu;
    // 0x241f0c: 0xae000370
    ctx->pc = 0x241f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x241f10: 0x24020004
    ctx->pc = 0x241f10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x241f14: 0xa6020324
    ctx->pc = 0x241f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x241f18: 0xa6020326
    ctx->pc = 0x241f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 806), (uint16_t)GPR_U32(ctx, 2));
    // 0x241f1c: 0x24020004
    ctx->pc = 0x241f1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x241f20: 0xae020388
    ctx->pc = 0x241f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
label_241f24:
    // 0x241f24: 0x8e020298
    ctx->pc = 0x241f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_241f28:
    // 0x241f28: 0x442000b
    ctx->pc = 0x241F28u;
    {
        const bool branch_taken_0x241f28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x241f28) {
            ctx->pc = 0x241F2Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x241F58u;
            goto label_241f58;
        }
    }
    ctx->pc = 0x241F30u;
    // 0x241f30: 0x24042b00
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x241f34: 0x442018
    ctx->pc = 0x241f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241f38: 0x3c020032
    ctx->pc = 0x241f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x241f3c: 0x24421be0
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x241f40: 0x822021
    ctx->pc = 0x241f40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x241f44: 0x24840030
    ctx->pc = 0x241f44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x241f48: 0xc09a2aa
    ctx->pc = 0x241F48u;
    SET_GPR_U32(ctx, 31, 0x241F50u);
    ctx->pc = 0x241F4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F50u; }
    }
    if (ctx->pc != 0x241F50u) { return; }
    ctx->pc = 0x241F50u;
    // 0x241f50: 0xe6000260
    ctx->pc = 0x241f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241f54: 0x200202d
    ctx->pc = 0x241f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241f58:
    // 0x241f58: 0x3c013f80
    ctx->pc = 0x241f58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x241f5c: 0x44816000
    ctx->pc = 0x241f5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x241f60: 0xc08f14c
    ctx->pc = 0x241F60u;
    SET_GPR_U32(ctx, 31, 0x241F68u);
    ctx->pc = 0x241F64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F68u; }
    }
    if (ctx->pc != 0x241F68u) { return; }
    ctx->pc = 0x241F68u;
    // 0x241f68: 0xc08f20c
    ctx->pc = 0x241F68u;
    SET_GPR_U32(ctx, 31, 0x241F70u);
    ctx->pc = 0x241F6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F70u; }
    }
    if (ctx->pc != 0x241F70u) { return; }
    ctx->pc = 0x241F70u;
    // 0x241f70: 0xe6000258
    ctx->pc = 0x241f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x241f74: 0xc090e82
    ctx->pc = 0x241F74u;
    SET_GPR_U32(ctx, 31, 0x241F7Cu);
    ctx->pc = 0x241F78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F7Cu; }
    }
    if (ctx->pc != 0x241F7Cu) { return; }
    ctx->pc = 0x241F7Cu;
    // 0x241f7c: 0x40034800
    ctx->pc = 0x241f7cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241f80: 0x3c02003a
    ctx->pc = 0x241f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x241f84: 0x8c4421d0
    ctx->pc = 0x241f84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241f88: 0x8c820188
    ctx->pc = 0x241f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x241f8c: 0x621823
    ctx->pc = 0x241f8cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241f90: 0x8c820180
    ctx->pc = 0x241f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x241f94: 0x621821
    ctx->pc = 0x241f94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241f98: 0xac830180
    ctx->pc = 0x241f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 3));
    // 0x241f9c: 0x8c820184
    ctx->pc = 0x241f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x241fa0: 0x24420001
    ctx->pc = 0x241fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x241fa4: 0xac820184
    ctx->pc = 0x241fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 2));
    // 0x241fa8: 0xdfbf0020
    ctx->pc = 0x241fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241fac: 0xdfb10010
    ctx->pc = 0x241facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241fb0: 0xdfb00000
    ctx->pc = 0x241fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241fb4: 0x3e00008
    ctx->pc = 0x241FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241FB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x241DFCu: goto label_241dfc;
            case 0x241E38u: goto label_241e38;
            case 0x241E64u: goto label_241e64;
            case 0x241EC0u: goto label_241ec0;
            case 0x241EF0u: goto label_241ef0;
            case 0x241F24u: goto label_241f24;
            case 0x241F28u: goto label_241f28;
            case 0x241F58u: goto label_241f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241FBCu;
}
