#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerProcessSkinFX
// Address: 0x233040 - 0x233154
void PlayerProcessSkinFX_0x233040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x233040u;

    // 0x233040: 0x27bdffe0
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233044: 0xffbf0010
    ctx->pc = 0x233044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233048: 0xffb00000
    ctx->pc = 0x233048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23304c: 0x80802d
    ctx->pc = 0x23304cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233050: 0xc60007d4
    ctx->pc = 0x233050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233054: 0x44801800
    ctx->pc = 0x233054u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x233058: 0x46030032
    ctx->pc = 0x233058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23305c: 0x0
    ctx->pc = 0x23305cu;
    // NOP
    // 0x233060: 0x45030019
    ctx->pc = 0x233060u;
    {
        const bool branch_taken_0x233060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x233060) {
            ctx->pc = 0x233064u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2330C8u;
            goto label_2330c8;
        }
    }
    ctx->pc = 0x233068u;
    // 0x233068: 0x46000086
    ctx->pc = 0x233068u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x23306c: 0x3c013f66
    ctx->pc = 0x23306cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x233070: 0x34216666
    ctx->pc = 0x233070u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x233074: 0x44810000
    ctx->pc = 0x233074u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x233078: 0x46001002
    ctx->pc = 0x233078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23307c: 0xe60007d4
    ctx->pc = 0x23307cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2004), bits); }
    // 0x233080: 0x46000005
    ctx->pc = 0x233080u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x233084: 0x3c013d4c
    ctx->pc = 0x233084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x233088: 0x3421cccd
    ctx->pc = 0x233088u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23308c: 0x44810800
    ctx->pc = 0x23308cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x233090: 0x46010034
    ctx->pc = 0x233090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233094: 0x45000003
    ctx->pc = 0x233094u;
    {
        const bool branch_taken_0x233094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233094) {
            ctx->pc = 0x2330A4u;
            goto label_2330a4;
        }
    }
    ctx->pc = 0x23309Cu;
    // 0x23309c: 0xe60307d4
    ctx->pc = 0x23309cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2004), bits); }
    // 0x2330a0: 0x46001886
    ctx->pc = 0x2330a0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_2330a4:
    // 0x2330a4: 0x3c01437f
    ctx->pc = 0x2330a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2330a8: 0x44810000
    ctx->pc = 0x2330a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2330ac: 0x46001002
    ctx->pc = 0x2330acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2330b0: 0x8e040080
    ctx->pc = 0x2330b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2330b4: 0x46000064
    ctx->pc = 0x2330b4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2330b8: 0x44050800
    ctx->pc = 0x2330b8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x2330bc: 0xc0b4156
    ctx->pc = 0x2330BCu;
    SET_GPR_U32(ctx, 31, 0x2330C4u);
    ctx->pc = 0x2330C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330C4u; }
    }
    if (ctx->pc != 0x2330C4u) { return; }
    ctx->pc = 0x2330C4u;
    // 0x2330c4: 0xc60107b4
    ctx->pc = 0x2330c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2330c8:
    // 0x2330c8: 0x44800000
    ctx->pc = 0x2330c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2330cc: 0x46010034
    ctx->pc = 0x2330ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2330d0: 0x0
    ctx->pc = 0x2330d0u;
    // NOP
    // 0x2330d4: 0x45000003
    ctx->pc = 0x2330D4u;
    {
        const bool branch_taken_0x2330d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2330D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2330d4) {
            ctx->pc = 0x2330E4u;
            goto label_2330e4;
        }
    }
    ctx->pc = 0x2330DCu;
    // 0x2330dc: 0x10000004
    ctx->pc = 0x2330DCu;
    {
        const bool branch_taken_0x2330dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2330E0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2354), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2330dc) {
            ctx->pc = 0x2330F0u;
            goto label_2330f0;
        }
    }
    ctx->pc = 0x2330E4u;
label_2330e4:
    // 0x2330e4: 0x86020932
    ctx->pc = 0x2330e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2354)));
    // 0x2330e8: 0x54400001
    ctx->pc = 0x2330E8u;
    {
        const bool branch_taken_0x2330e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2330e8) {
            ctx->pc = 0x2330ECu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 2354), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2330F0u;
            goto label_2330f0;
        }
    }
    ctx->pc = 0x2330F0u;
label_2330f0:
    // 0x2330f0: 0x260407b4
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
    // 0x2330f4: 0x8e050080
    ctx->pc = 0x2330f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2330f8: 0xc09ff98
    ctx->pc = 0x2330F8u;
    SET_GPR_U32(ctx, 31, 0x233100u);
    ctx->pc = 0x2330FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessSkinFX_0x27fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233100u; }
    }
    if (ctx->pc != 0x233100u) { return; }
    ctx->pc = 0x233100u;
    // 0x233100: 0x14400011
    ctx->pc = 0x233100u;
    {
        const bool branch_taken_0x233100 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233104u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x233100) {
            ctx->pc = 0x233148u;
            goto label_233148;
        }
    }
    ctx->pc = 0x233108u;
    // 0x233108: 0x8e040080
    ctx->pc = 0x233108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x23310c: 0x8482005c
    ctx->pc = 0x23310cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x233110: 0x2842ffff
    ctx->pc = 0x233110u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x233114: 0x5040000d
    ctx->pc = 0x233114u;
    {
        const bool branch_taken_0x233114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x233114) {
            ctx->pc = 0x233118u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x23314Cu;
            goto label_23314c;
        }
    }
    ctx->pc = 0x23311Cu;
    // 0x23311c: 0x2405ffff
    ctx->pc = 0x23311cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233120: 0x302d
    ctx->pc = 0x233120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233124: 0xc0b4126
    ctx->pc = 0x233124u;
    SET_GPR_U32(ctx, 31, 0x23312Cu);
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23312Cu; }
    }
    if (ctx->pc != 0x23312Cu) { return; }
    ctx->pc = 0x23312Cu;
    // 0x23312c: 0x8e040080
    ctx->pc = 0x23312cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x233130: 0x282d
    ctx->pc = 0x233130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233134: 0x24060001
    ctx->pc = 0x233134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x233138: 0xdfbf0010
    ctx->pc = 0x233138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23313c: 0xdfb00000
    ctx->pc = 0x23313cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233140: 0x80b4156
    ctx->pc = 0x233140u;
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D0558u;
    MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime); return;
    ctx->pc = 0x233148u;
label_233148:
    // 0x233148: 0xdfb00000
    ctx->pc = 0x233148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23314c:
    // 0x23314c: 0x3e00008
    ctx->pc = 0x23314Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2330A4u: goto label_2330a4;
            case 0x2330C8u: goto label_2330c8;
            case 0x2330E4u: goto label_2330e4;
            case 0x2330F0u: goto label_2330f0;
            case 0x233148u: goto label_233148;
            case 0x23314Cu: goto label_23314c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233154u;
}
