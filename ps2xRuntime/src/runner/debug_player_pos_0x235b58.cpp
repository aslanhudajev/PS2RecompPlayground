#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: debug_player_pos
// Address: 0x235b58 - 0x235db0
void debug_player_pos_0x235b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x235b58u;

    // 0x235b58: 0x27bdff50
    ctx->pc = 0x235b58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x235b5c: 0xffbf0090
    ctx->pc = 0x235b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x235b60: 0xffb50080
    ctx->pc = 0x235b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x235b64: 0xffb40070
    ctx->pc = 0x235b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x235b68: 0xffb30060
    ctx->pc = 0x235b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x235b6c: 0xffb20050
    ctx->pc = 0x235b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x235b70: 0xffb10040
    ctx->pc = 0x235b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x235b74: 0xffb00030
    ctx->pc = 0x235b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x235b78: 0xe7b400a0
    ctx->pc = 0x235b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x235b7c: 0x80902d
    ctx->pc = 0x235b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b80: 0x3c02003a
    ctx->pc = 0x235b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x235b84: 0x24467998
    ctx->pc = 0x235b84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 31128));
    // 0x235b88: 0x68c30007
    ctx->pc = 0x235b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x235b8c: 0x6cc30000
    ctx->pc = 0x235b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x235b90: 0x68c4000f
    ctx->pc = 0x235b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x235b94: 0x6cc40008
    ctx->pc = 0x235b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x235b98: 0xb3a30007
    ctx->pc = 0x235b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235b9c: 0xb7a30000
    ctx->pc = 0x235b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235ba0: 0xb3a4000f
    ctx->pc = 0x235ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235ba4: 0xb7a40008
    ctx->pc = 0x235ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x235ba8: 0x24032b00
    ctx->pc = 0x235ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x235bac: 0x2431818
    ctx->pc = 0x235bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235bb0: 0x3c020032
    ctx->pc = 0x235bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x235bb4: 0x24421bc0
    ctx->pc = 0x235bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x235bb8: 0x62a821
    ctx->pc = 0x235bb8u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235bbc: 0x3c02003a
    ctx->pc = 0x235bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x235bc0: 0x245079a8
    ctx->pc = 0x235bc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 31144));
    // 0x235bc4: 0x3c020031
    ctx->pc = 0x235bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x235bc8: 0x8c430018
    ctx->pc = 0x235bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x235bcc: 0x24024010
    ctx->pc = 0x235bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x235bd0: 0x1462006e
    ctx->pc = 0x235BD0u;
    {
        const bool branch_taken_0x235bd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x235BD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x235bd0) {
            ctx->pc = 0x235D8Cu;
            goto label_235d8c;
        }
    }
    ctx->pc = 0x235BD8u;
    // 0x235bd8: 0x3c040080
    ctx->pc = 0x235bd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)128 << 16));
    // 0x235bdc: 0xc0b46e2
    ctx->pc = 0x235BDCu;
    SET_GPR_U32(ctx, 31, 0x235BE4u);
    ctx->pc = 0x235BE0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65408));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235BE4u; }
    }
    if (ctx->pc != 0x235BE4u) { return; }
    ctx->pc = 0x235BE4u;
    // 0x235be4: 0x202d
    ctx->pc = 0x235be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235be8: 0x27a50020
    ctx->pc = 0x235be8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x235bec: 0x27a60024
    ctx->pc = 0x235becu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x235bf0: 0xc09cf78
    ctx->pc = 0x235BF0u;
    SET_GPR_U32(ctx, 31, 0x235BF8u);
    ctx->pc = 0x235BF4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 96));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235BF8u; }
    }
    if (ctx->pc != 0x235BF8u) { return; }
    ctx->pc = 0x235BF8u;
    // 0x235bf8: 0x3c03003a
    ctx->pc = 0x235bf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x235bfc: 0x24020001
    ctx->pc = 0x235bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x235c00: 0xac621be4
    ctx->pc = 0x235c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7140), GPR_U32(ctx, 2));
    // 0x235c04: 0x8ea408a0
    ctx->pc = 0x235c04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 2208)));
    // 0x235c08: 0x1080000d
    ctx->pc = 0x235C08u;
    {
        const bool branch_taken_0x235c08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x235C0Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x235c08) {
            ctx->pc = 0x235C40u;
            goto label_235c40;
        }
    }
    ctx->pc = 0x235C10u;
    // 0x235c10: 0x24631b90
    ctx->pc = 0x235c10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x235c14: 0x2402003c
    ctx->pc = 0x235c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x235c18: 0x2421018
    ctx->pc = 0x235c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235c1c: 0x621821
    ctx->pc = 0x235c1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235c20: 0xc4610020
    ctx->pc = 0x235c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235c24: 0x44800000
    ctx->pc = 0x235c24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x235c28: 0x46000832
    ctx->pc = 0x235c28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235c2c: 0x0
    ctx->pc = 0x235c2cu;
    // NOP
    // 0x235c30: 0x45030004
    ctx->pc = 0x235C30u;
    {
        const bool branch_taken_0x235c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x235c30) {
            ctx->pc = 0x235C34u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 2204)));
            ctx->pc = 0x235C44u;
            goto label_235c44;
        }
    }
    ctx->pc = 0x235C38u;
    // 0x235c38: 0x10000004
    ctx->pc = 0x235C38u;
    {
        const bool branch_taken_0x235c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235C3Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x235c38) {
            ctx->pc = 0x235C4Cu;
            goto label_235c4c;
        }
    }
    ctx->pc = 0x235C40u;
label_235c40:
    // 0x235c40: 0x8ea2089c
    ctx->pc = 0x235c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 2204)));
label_235c44:
    // 0x235c44: 0x54400001
    ctx->pc = 0x235C44u;
    {
        const bool branch_taken_0x235c44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x235c44) {
            ctx->pc = 0x235C48u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x235C4Cu;
            goto label_235c4c;
        }
    }
    ctx->pc = 0x235C4Cu;
label_235c4c:
    // 0x235c4c: 0xc0b1444
    ctx->pc = 0x235C4Cu;
    SET_GPR_U32(ctx, 31, 0x235C54u);
    ctx->pc = 0x235C50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C54u; }
    }
    if (ctx->pc != 0x235C54u) { return; }
    ctx->pc = 0x235C54u;
    // 0x235c54: 0x40a02d
    ctx->pc = 0x235c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c58: 0x3c0143a5
    ctx->pc = 0x235c58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17317 << 16));
    // 0x235c5c: 0x44810000
    ctx->pc = 0x235c5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x235c60: 0xe7a00024
    ctx->pc = 0x235c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x235c64: 0x3c020032
    ctx->pc = 0x235c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x235c68: 0x244215d0
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
    // 0x235c6c: 0x129040
    ctx->pc = 0x235c6cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
    // 0x235c70: 0x2429021
    ctx->pc = 0x235c70u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x235c74: 0x96440000
    ctx->pc = 0x235c74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235c78: 0x24840008
    ctx->pc = 0x235c78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x235c7c: 0x46000064
    ctx->pc = 0x235c7cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x235c80: 0x44050800
    ctx->pc = 0x235c80u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x235c84: 0x24060001
    ctx->pc = 0x235c84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x235c88: 0x3c0700ff
    ctx->pc = 0x235c88u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x235c8c: 0x34e7ffff
    ctx->pc = 0x235c8cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x235c90: 0xc0804c8
    ctx->pc = 0x235C90u;
    SET_GPR_U32(ctx, 31, 0x235C98u);
    ctx->pc = 0x235C94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C98u; }
    }
    if (ctx->pc != 0x235C98u) { return; }
    ctx->pc = 0x235C98u;
    // 0x235c98: 0x3c014120
    ctx->pc = 0x235c98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x235c9c: 0x4481a000
    ctx->pc = 0x235c9cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x235ca0: 0xc7a00024
    ctx->pc = 0x235ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235ca4: 0x46140000
    ctx->pc = 0x235ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x235ca8: 0xe7a00024
    ctx->pc = 0x235ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x235cac: 0xc0be862
    ctx->pc = 0x235CACu;
    SET_GPR_U32(ctx, 31, 0x235CB4u);
    ctx->pc = 0x235CB0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CB4u; }
    }
    if (ctx->pc != 0x235CB4u) { return; }
    ctx->pc = 0x235CB4u;
    // 0x235cb4: 0x40982d
    ctx->pc = 0x235cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cb8: 0xc0be862
    ctx->pc = 0x235CB8u;
    SET_GPR_U32(ctx, 31, 0x235CC0u);
    ctx->pc = 0x235CBCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CC0u; }
    }
    if (ctx->pc != 0x235CC0u) { return; }
    ctx->pc = 0x235CC0u;
    // 0x235cc0: 0x40802d
    ctx->pc = 0x235cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cc4: 0xc0be862
    ctx->pc = 0x235CC4u;
    SET_GPR_U32(ctx, 31, 0x235CCCu);
    ctx->pc = 0x235CC8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CCCu; }
    }
    if (ctx->pc != 0x235CCCu) { return; }
    ctx->pc = 0x235CCCu;
    // 0x235ccc: 0x3c11003c
    ctx->pc = 0x235cccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x235cd0: 0x26241b48
    ctx->pc = 0x235cd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6984));
    // 0x235cd4: 0x3c05003a
    ctx->pc = 0x235cd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x235cd8: 0x24a579b8
    ctx->pc = 0x235cd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31160));
    // 0x235cdc: 0x260302d
    ctx->pc = 0x235cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ce0: 0x200382d
    ctx->pc = 0x235ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ce4: 0xc0b6252
    ctx->pc = 0x235CE4u;
    SET_GPR_U32(ctx, 31, 0x235CECu);
    ctx->pc = 0x235CE8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CECu; }
    }
    if (ctx->pc != 0x235CECu) { return; }
    ctx->pc = 0x235CECu;
    // 0x235cec: 0x96440000
    ctx->pc = 0x235cecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235cf0: 0xc7a00024
    ctx->pc = 0x235cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235cf4: 0x24840008
    ctx->pc = 0x235cf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x235cf8: 0x46000064
    ctx->pc = 0x235cf8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x235cfc: 0x44050800
    ctx->pc = 0x235cfcu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x235d00: 0x24060001
    ctx->pc = 0x235d00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x235d04: 0x3c0700ff
    ctx->pc = 0x235d04u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x235d08: 0x34e7ffff
    ctx->pc = 0x235d08u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x235d0c: 0xc0804c8
    ctx->pc = 0x235D0Cu;
    SET_GPR_U32(ctx, 31, 0x235D14u);
    ctx->pc = 0x235D10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 6984));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D14u; }
    }
    if (ctx->pc != 0x235D14u) { return; }
    ctx->pc = 0x235D14u;
    // 0x235d14: 0xc7a00024
    ctx->pc = 0x235d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235d18: 0x46140000
    ctx->pc = 0x235d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x235d1c: 0xe7a00024
    ctx->pc = 0x235d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x235d20: 0x27a40010
    ctx->pc = 0x235d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x235d24: 0xc0b109a
    ctx->pc = 0x235D24u;
    SET_GPR_U32(ctx, 31, 0x235D2Cu);
    ctx->pc = 0x235D28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 80));
    ctx->pc = 0x2C4268u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldToScreen_0x2c4268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D2Cu; }
    }
    if (ctx->pc != 0x235D2Cu) { return; }
    ctx->pc = 0x235D2Cu;
    // 0x235d2c: 0xc0be862
    ctx->pc = 0x235D2Cu;
    SET_GPR_U32(ctx, 31, 0x235D34u);
    ctx->pc = 0x235D30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D34u; }
    }
    if (ctx->pc != 0x235D34u) { return; }
    ctx->pc = 0x235D34u;
    // 0x235d34: 0x40802d
    ctx->pc = 0x235d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d38: 0xc0be862
    ctx->pc = 0x235D38u;
    SET_GPR_U32(ctx, 31, 0x235D40u);
    ctx->pc = 0x235D3Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D40u; }
    }
    if (ctx->pc != 0x235D40u) { return; }
    ctx->pc = 0x235D40u;
    // 0x235d40: 0x26241b48
    ctx->pc = 0x235d40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6984));
    // 0x235d44: 0x3c05003a
    ctx->pc = 0x235d44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x235d48: 0x24a579d0
    ctx->pc = 0x235d48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31184));
    // 0x235d4c: 0x200302d
    ctx->pc = 0x235d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d50: 0xc0b6252
    ctx->pc = 0x235D50u;
    SET_GPR_U32(ctx, 31, 0x235D58u);
    ctx->pc = 0x235D54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D58u; }
    }
    if (ctx->pc != 0x235D58u) { return; }
    ctx->pc = 0x235D58u;
    // 0x235d58: 0x96440000
    ctx->pc = 0x235d58u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235d5c: 0xc7a00024
    ctx->pc = 0x235d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235d60: 0x24840008
    ctx->pc = 0x235d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x235d64: 0x46000064
    ctx->pc = 0x235d64u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x235d68: 0x44050800
    ctx->pc = 0x235d68u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x235d6c: 0x24060001
    ctx->pc = 0x235d6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x235d70: 0x3c0700ff
    ctx->pc = 0x235d70u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x235d74: 0x34e7ffff
    ctx->pc = 0x235d74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x235d78: 0xc0804c8
    ctx->pc = 0x235D78u;
    SET_GPR_U32(ctx, 31, 0x235D80u);
    ctx->pc = 0x235D7Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 6984));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D80u; }
    }
    if (ctx->pc != 0x235D80u) { return; }
    ctx->pc = 0x235D80u;
    // 0x235d80: 0xc0b1444
    ctx->pc = 0x235D80u;
    SET_GPR_U32(ctx, 31, 0x235D88u);
    ctx->pc = 0x235D84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D88u; }
    }
    if (ctx->pc != 0x235D88u) { return; }
    ctx->pc = 0x235D88u;
    // 0x235d88: 0xdfbf0090
    ctx->pc = 0x235d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_235d8c:
    // 0x235d8c: 0xdfb50080
    ctx->pc = 0x235d8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x235d90: 0xdfb40070
    ctx->pc = 0x235d90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235d94: 0xdfb30060
    ctx->pc = 0x235d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x235d98: 0xdfb20050
    ctx->pc = 0x235d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235d9c: 0xdfb10040
    ctx->pc = 0x235d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235da0: 0xdfb00030
    ctx->pc = 0x235da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235da4: 0xc7b400a0
    ctx->pc = 0x235da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235da8: 0x3e00008
    ctx->pc = 0x235DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235DACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235C40u: goto label_235c40;
            case 0x235C44u: goto label_235c44;
            case 0x235C4Cu: goto label_235c4c;
            case 0x235D8Cu: goto label_235d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235DB0u;
}
