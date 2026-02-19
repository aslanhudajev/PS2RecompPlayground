#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_turn_dir
// Address: 0x23bfb0 - 0x23c15c
void set_turn_dir_0x23bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23bfb0u;

    // 0x23bfb0: 0x27bdffb0
    ctx->pc = 0x23bfb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23bfb4: 0xffbf0010
    ctx->pc = 0x23bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bfb8: 0xffb00000
    ctx->pc = 0x23bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bfbc: 0xe7b80040
    ctx->pc = 0x23bfbcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23bfc0: 0xe7b70038
    ctx->pc = 0x23bfc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23bfc4: 0xe7b60030
    ctx->pc = 0x23bfc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23bfc8: 0xe7b50028
    ctx->pc = 0x23bfc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23bfcc: 0xe7b40020
    ctx->pc = 0x23bfccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23bfd0: 0x80802d
    ctx->pc = 0x23bfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bfd4: 0x86030288
    ctx->pc = 0x23bfd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23bfd8: 0x24022b00
    ctx->pc = 0x23bfd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23bfdc: 0x621818
    ctx->pc = 0x23bfdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23bfe0: 0x3c020032
    ctx->pc = 0x23bfe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23bfe4: 0x24421bc0
    ctx->pc = 0x23bfe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23bfe8: 0x621821
    ctx->pc = 0x23bfe8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bfec: 0xc6010040
    ctx->pc = 0x23bfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bff0: 0xc4600050
    ctx->pc = 0x23bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bff4: 0x46000d01
    ctx->pc = 0x23bff4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23bff8: 0xc6010048
    ctx->pc = 0x23bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bffc: 0xc4600058
    ctx->pc = 0x23bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c000: 0x46000e01
    ctx->pc = 0x23c000u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23c004: 0xc6010258
    ctx->pc = 0x23c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c008: 0x3c013f06
    ctx->pc = 0x23c008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16134 << 16));
    // 0x23c00c: 0x34210a92
    ctx->pc = 0x23c00cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x23c010: 0x44810000
    ctx->pc = 0x23c010u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c014: 0x46000d40
    ctx->pc = 0x23c014u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c018: 0x3c014049
    ctx->pc = 0x23c018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23c01c: 0x34210fdb
    ctx->pc = 0x23c01cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c020: 0x44810000
    ctx->pc = 0x23c020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c024: 0x46150034
    ctx->pc = 0x23c024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c028: 0x45000006
    ctx->pc = 0x23C028u;
    {
        const bool branch_taken_0x23c028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c028) {
            ctx->pc = 0x23C044u;
            goto label_23c044;
        }
    }
    ctx->pc = 0x23C030u;
    // 0x23c030: 0x3c0140c9
    ctx->pc = 0x23c030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c034: 0x34210fdb
    ctx->pc = 0x23c034u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c038: 0x44810000
    ctx->pc = 0x23c038u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c03c: 0x1000000c
    ctx->pc = 0x23C03Cu;
    {
        const bool branch_taken_0x23c03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C040u;
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        if (branch_taken_0x23c03c) {
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C044u;
label_23c044:
    // 0x23c044: 0x3c01c049
    ctx->pc = 0x23c044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23c048: 0x34210fdb
    ctx->pc = 0x23c048u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c04c: 0x44810000
    ctx->pc = 0x23c04cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c050: 0x4600a836
    ctx->pc = 0x23c050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c054: 0x0
    ctx->pc = 0x23c054u;
    // NOP
    // 0x23c058: 0x45020005
    ctx->pc = 0x23C058u;
    {
        const bool branch_taken_0x23c058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c058) {
            ctx->pc = 0x23C05Cu;
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C060u;
    // 0x23c060: 0x3c0140c9
    ctx->pc = 0x23c060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c064: 0x34210fdb
    ctx->pc = 0x23c064u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c068: 0x44810000
    ctx->pc = 0x23c068u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c06c: 0x4600ab00
    ctx->pc = 0x23c06cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_23c070:
    // 0x23c070: 0xc0b9e4a
    ctx->pc = 0x23C070u;
    SET_GPR_U32(ctx, 31, 0x23C078u);
    ctx->pc = 0x23C074u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C078u; }
    }
    if (ctx->pc != 0x23C078u) { return; }
    ctx->pc = 0x23C078u;
    // 0x23c078: 0x461405c0
    ctx->pc = 0x23c078u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x23c07c: 0xc0b9dce
    ctx->pc = 0x23C07Cu;
    SET_GPR_U32(ctx, 31, 0x23C084u);
    ctx->pc = 0x23C080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C084u; }
    }
    if (ctx->pc != 0x23C084u) { return; }
    ctx->pc = 0x23C084u;
    // 0x23c084: 0x46180580
    ctx->pc = 0x23c084u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x23c088: 0xc6000258
    ctx->pc = 0x23c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c08c: 0x3c013f06
    ctx->pc = 0x23c08cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16134 << 16));
    // 0x23c090: 0x34210a92
    ctx->pc = 0x23c090u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x23c094: 0x44810800
    ctx->pc = 0x23c094u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23c098: 0x46010541
    ctx->pc = 0x23c098u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23c09c: 0x3c014049
    ctx->pc = 0x23c09cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23c0a0: 0x34210fdb
    ctx->pc = 0x23c0a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c0a4: 0x44810000
    ctx->pc = 0x23c0a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c0a8: 0x46150034
    ctx->pc = 0x23c0a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c0ac: 0x45000006
    ctx->pc = 0x23C0ACu;
    {
        const bool branch_taken_0x23c0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c0ac) {
            ctx->pc = 0x23C0C8u;
            goto label_23c0c8;
        }
    }
    ctx->pc = 0x23C0B4u;
    // 0x23c0b4: 0x3c0140c9
    ctx->pc = 0x23c0b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c0b8: 0x34210fdb
    ctx->pc = 0x23c0b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c0bc: 0x44810000
    ctx->pc = 0x23c0bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c0c0: 0x1000000c
    ctx->pc = 0x23C0C0u;
    {
        const bool branch_taken_0x23c0c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C0C4u;
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        if (branch_taken_0x23c0c0) {
            ctx->pc = 0x23C0F4u;
            goto label_23c0f4;
        }
    }
    ctx->pc = 0x23C0C8u;
label_23c0c8:
    // 0x23c0c8: 0x3c01c049
    ctx->pc = 0x23c0c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23c0cc: 0x34210fdb
    ctx->pc = 0x23c0ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c0d0: 0x44810000
    ctx->pc = 0x23c0d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c0d4: 0x4600a836
    ctx->pc = 0x23c0d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c0d8: 0x0
    ctx->pc = 0x23c0d8u;
    // NOP
    // 0x23c0dc: 0x45020005
    ctx->pc = 0x23C0DCu;
    {
        const bool branch_taken_0x23c0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c0dc) {
            ctx->pc = 0x23C0E0u;
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->pc = 0x23C0F4u;
            goto label_23c0f4;
        }
    }
    ctx->pc = 0x23C0E4u;
    // 0x23c0e4: 0x3c0140c9
    ctx->pc = 0x23c0e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c0e8: 0x34210fdb
    ctx->pc = 0x23c0e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c0ec: 0x44810000
    ctx->pc = 0x23c0ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c0f0: 0x4600ab00
    ctx->pc = 0x23c0f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_23c0f4:
    // 0x23c0f4: 0xc0b9e4a
    ctx->pc = 0x23C0F4u;
    SET_GPR_U32(ctx, 31, 0x23C0FCu);
    ctx->pc = 0x23C0F8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0FCu; }
    }
    if (ctx->pc != 0x23C0FCu) { return; }
    ctx->pc = 0x23C0FCu;
    // 0x23c0fc: 0x46140500
    ctx->pc = 0x23c0fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x23c100: 0xc0b9dce
    ctx->pc = 0x23C100u;
    SET_GPR_U32(ctx, 31, 0x23C108u);
    ctx->pc = 0x23C104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C108u; }
    }
    if (ctx->pc != 0x23C108u) { return; }
    ctx->pc = 0x23C108u;
    // 0x23c108: 0x46180000
    ctx->pc = 0x23c108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x23c10c: 0x4614a502
    ctx->pc = 0x23c10cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x23c110: 0x46000002
    ctx->pc = 0x23c110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23c114: 0x4600a500
    ctx->pc = 0x23c114u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23c118: 0x4617b802
    ctx->pc = 0x23c118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x23c11c: 0x4616b042
    ctx->pc = 0x23c11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x23c120: 0x46010000
    ctx->pc = 0x23c120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23c124: 0x4600a036
    ctx->pc = 0x23c124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c128: 0x0
    ctx->pc = 0x23c128u;
    // NOP
    // 0x23c12c: 0x45000002
    ctx->pc = 0x23C12Cu;
    {
        const bool branch_taken_0x23c12c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23C130u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23c12c) {
            ctx->pc = 0x23C138u;
            goto label_23c138;
        }
    }
    ctx->pc = 0x23C134u;
    // 0x23c134: 0x2402ffff
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c138:
    // 0x23c138: 0xdfbf0010
    ctx->pc = 0x23c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c13c: 0xdfb00000
    ctx->pc = 0x23c13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c140: 0xc7b80040
    ctx->pc = 0x23c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23c144: 0xc7b70038
    ctx->pc = 0x23c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23c148: 0xc7b60030
    ctx->pc = 0x23c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23c14c: 0xc7b50028
    ctx->pc = 0x23c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23c150: 0xc7b40020
    ctx->pc = 0x23c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c154: 0x3e00008
    ctx->pc = 0x23C154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C158u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C044u: goto label_23c044;
            case 0x23C070u: goto label_23c070;
            case 0x23C0C8u: goto label_23c0c8;
            case 0x23C0F4u: goto label_23c0f4;
            case 0x23C138u: goto label_23c138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C15Cu;
}
