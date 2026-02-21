#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: generate_single
// Address: 0x253e98 - 0x25401c
void generate_single_0x253e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253e98u;

    // 0x253e98: 0x27bdff70
    ctx->pc = 0x253e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x253e9c: 0xffbf0070
    ctx->pc = 0x253e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x253ea0: 0xffb40060
    ctx->pc = 0x253ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x253ea4: 0xffb30050
    ctx->pc = 0x253ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x253ea8: 0xffb20040
    ctx->pc = 0x253ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x253eac: 0xffb10030
    ctx->pc = 0x253eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x253eb0: 0xffb00020
    ctx->pc = 0x253eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x253eb4: 0xe7b40080
    ctx->pc = 0x253eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x253eb8: 0x80882d
    ctx->pc = 0x253eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ebc: 0xa0982d
    ctx->pc = 0x253ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ec0: 0x263200f0
    ctx->pc = 0x253ec0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 240));
    // 0x253ec4: 0x82420002
    ctx->pc = 0x253ec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x253ec8: 0x1440004b
    ctx->pc = 0x253EC8u;
    {
        const bool branch_taken_0x253ec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253ECCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253ec8) {
            ctx->pc = 0x253FF8u;
            goto label_253ff8;
        }
    }
    ctx->pc = 0x253ED0u;
    // 0x253ed0: 0x8e220000
    ctx->pc = 0x253ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253ed4: 0xc454000c
    ctx->pc = 0x253ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253ed8: 0xc094e70
    ctx->pc = 0x253ED8u;
    SET_GPR_U32(ctx, 31, 0x253EE0u);
    ctx->pc = 0x253EDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EE0u; }
    }
    if (ctx->pc != 0x253EE0u) { return; }
    ctx->pc = 0x253EE0u;
    // 0x253ee0: 0x27b00010
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x253ee4: 0x220202d
    ctx->pc = 0x253ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ee8: 0xc094e78
    ctx->pc = 0x253EE8u;
    SET_GPR_U32(ctx, 31, 0x253EF0u);
    ctx->pc = 0x253EECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemDir_0x2539e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EF0u; }
    }
    if (ctx->pc != 0x253EF0u) { return; }
    ctx->pc = 0x253EF0u;
    // 0x253ef0: 0x3a0202d
    ctx->pc = 0x253ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ef4: 0x862500f0
    ctx->pc = 0x253ef4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x253ef8: 0x82460006
    ctx->pc = 0x253ef8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x253efc: 0x200382d
    ctx->pc = 0x253efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f00: 0x4600a306
    ctx->pc = 0x253f00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x253f04: 0x82480007
    ctx->pc = 0x253f04u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x253f08: 0x220482d
    ctx->pc = 0x253f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f0c: 0xc08e53c
    ctx->pc = 0x253F0Cu;
    SET_GPR_U32(ctx, 31, 0x253F14u);
    ctx->pc = 0x253F10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2394F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        generate_enemy_0x2394f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F14u; }
    }
    if (ctx->pc != 0x253F14u) { return; }
    ctx->pc = 0x253F14u;
    // 0x253f14: 0x4400038
    ctx->pc = 0x253F14u;
    {
        const bool branch_taken_0x253f14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x253F18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x253f14) {
            ctx->pc = 0x253FF8u;
            goto label_253ff8;
        }
    }
    ctx->pc = 0x253F1Cu;
    // 0x253f1c: 0x431818
    ctx->pc = 0x253f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x253f20: 0x3c020033
    ctx->pc = 0x253f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x253f24: 0x2442dfd0
    ctx->pc = 0x253f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x253f28: 0x621821
    ctx->pc = 0x253f28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253f2c: 0x2402000f
    ctx->pc = 0x253f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x253f30: 0x56620003
    ctx->pc = 0x253F30u;
    {
        const bool branch_taken_0x253f30 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x253f30) {
            ctx->pc = 0x253F34u;
            WRITE16(ADD32(GPR_U32(ctx, 3), 748), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x253F40u;
            goto label_253f40;
        }
    }
    ctx->pc = 0x253F38u;
    // 0x253f38: 0x24020002
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x253f3c: 0xa46202ec
    ctx->pc = 0x253f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 748), (uint16_t)GPR_U32(ctx, 2));
label_253f40:
    // 0x253f40: 0x2402000b
    ctx->pc = 0x253f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x253f44: 0x16620003
    ctx->pc = 0x253F44u;
    {
        const bool branch_taken_0x253f44 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x253F48u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 804), (uint16_t)GPR_U32(ctx, 19));
        if (branch_taken_0x253f44) {
            ctx->pc = 0x253F54u;
            goto label_253f54;
        }
    }
    ctx->pc = 0x253F4Cu;
    // 0x253f4c: 0x24020007
    ctx->pc = 0x253f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x253f50: 0xac6200c8
    ctx->pc = 0x253f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 2));
label_253f54:
    // 0x253f54: 0xc6400010
    ctx->pc = 0x253f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253f58: 0xc461026c
    ctx->pc = 0x253f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253f5c: 0x46010040
    ctx->pc = 0x253f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253f60: 0x3c014049
    ctx->pc = 0x253f60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x253f64: 0x34210fdb
    ctx->pc = 0x253f64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x253f68: 0x44810000
    ctx->pc = 0x253f68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x253f6c: 0x46010034
    ctx->pc = 0x253f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253f70: 0x0
    ctx->pc = 0x253f70u;
    // NOP
    // 0x253f74: 0x45000006
    ctx->pc = 0x253F74u;
    {
        const bool branch_taken_0x253f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253F78u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 608), bits); }
        if (branch_taken_0x253f74) {
            ctx->pc = 0x253F90u;
            goto label_253f90;
        }
    }
    ctx->pc = 0x253F7Cu;
    // 0x253f7c: 0x3c0140c9
    ctx->pc = 0x253f7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x253f80: 0x34210fdb
    ctx->pc = 0x253f80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x253f84: 0x44810000
    ctx->pc = 0x253f84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x253f88: 0x1000000d
    ctx->pc = 0x253F88u;
    {
        const bool branch_taken_0x253f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253F8Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x253f88) {
            ctx->pc = 0x253FC0u;
            goto label_253fc0;
        }
    }
    ctx->pc = 0x253F90u;
label_253f90:
    // 0x253f90: 0xc4610260
    ctx->pc = 0x253f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253f94: 0x3c01c049
    ctx->pc = 0x253f94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x253f98: 0x34210fdb
    ctx->pc = 0x253f98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x253f9c: 0x44810000
    ctx->pc = 0x253f9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x253fa0: 0x46000836
    ctx->pc = 0x253fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253fa4: 0x0
    ctx->pc = 0x253fa4u;
    // NOP
    // 0x253fa8: 0x45020005
    ctx->pc = 0x253FA8u;
    {
        const bool branch_taken_0x253fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253fa8) {
            ctx->pc = 0x253FACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x253FC0u;
            goto label_253fc0;
        }
    }
    ctx->pc = 0x253FB0u;
    // 0x253fb0: 0x3c0140c9
    ctx->pc = 0x253fb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x253fb4: 0x34210fdb
    ctx->pc = 0x253fb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x253fb8: 0x44810000
    ctx->pc = 0x253fb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x253fbc: 0x46000800
    ctx->pc = 0x253fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_253fc0:
    // 0x253fc0: 0xe4600260
    ctx->pc = 0x253fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 608), bits); }
    // 0x253fc4: 0xe4600264
    ctx->pc = 0x253fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 612), bits); }
    // 0x253fc8: 0xac600254
    ctx->pc = 0x253fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 0));
    // 0x253fcc: 0xe4600258
    ctx->pc = 0x253fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 600), bits); }
    // 0x253fd0: 0xac60025c
    ctx->pc = 0x253fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 604), GPR_U32(ctx, 0));
    // 0x253fd4: 0xc4600040
    ctx->pc = 0x253fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253fd8: 0xe4600300
    ctx->pc = 0x253fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x253fdc: 0xc4600044
    ctx->pc = 0x253fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253fe0: 0xe4600304
    ctx->pc = 0x253fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x253fe4: 0xc4600048
    ctx->pc = 0x253fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253fe8: 0xe4600308
    ctx->pc = 0x253fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 776), bits); }
    // 0x253fec: 0x92420002
    ctx->pc = 0x253fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x253ff0: 0x24420001
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x253ff4: 0xa2420002
    ctx->pc = 0x253ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_253ff8:
    // 0x253ff8: 0xdfbf0070
    ctx->pc = 0x253ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253ffc: 0xdfb40060
    ctx->pc = 0x253ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254000: 0xdfb30050
    ctx->pc = 0x254000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254004: 0xdfb20040
    ctx->pc = 0x254004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254008: 0xdfb10030
    ctx->pc = 0x254008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25400c: 0xdfb00020
    ctx->pc = 0x25400cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254010: 0xc7b40080
    ctx->pc = 0x254010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x254014: 0x3e00008
    ctx->pc = 0x254014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254018u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253F40u: goto label_253f40;
            case 0x253F54u: goto label_253f54;
            case 0x253F90u: goto label_253f90;
            case 0x253FC0u: goto label_253fc0;
            case 0x253FF8u: goto label_253ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25401Cu;
}
