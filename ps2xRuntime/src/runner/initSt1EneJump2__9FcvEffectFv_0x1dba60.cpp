#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt1EneJump2__9FcvEffectFv
// Address: 0x1dba60 - 0x1dbbd0
void initSt1EneJump2__9FcvEffectFv_0x1dba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt1EneJump2__9FcvEffectFv");


    ctx->pc = 0x1dba60u;

    // 0x1dba60: 0x27bdffa0
    ctx->pc = 0x1dba60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dba64: 0x7fbf0050
    ctx->pc = 0x1dba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1dba68: 0x7fb40040
    ctx->pc = 0x1dba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dba6c: 0x7fb30030
    ctx->pc = 0x1dba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dba70: 0x7fb20020
    ctx->pc = 0x1dba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dba74: 0x7fb10010
    ctx->pc = 0x1dba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dba78: 0x7080a628
    ctx->pc = 0x1dba78u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dba7c: 0x24050029
    ctx->pc = 0x1dba7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 41));
    // 0x1dba80: 0xc0761c4
    ctx->pc = 0x1DBA80u;
    SET_GPR_U32(ctx, 31, 0x1DBA88u);
    ctx->pc = 0x1DBA84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA88u; }
        else if (ctx->pc != 0x1DBA88u) { ctx->pc = 0x1DBA88u; }
    }
    if (ctx->pc != 0x1DBA88u) { return; }
    ctx->pc = 0x1DBA88u;
    // 0x1dba88: 0xae820054
    ctx->pc = 0x1dba88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1dba8c: 0x3c0242b4
    ctx->pc = 0x1dba8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17076 << 16));
    // 0x1dba90: 0xae820028
    ctx->pc = 0x1dba90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1dba94: 0x27848d4c
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dba98: 0xc07f208
    ctx->pc = 0x1DBA98u;
    SET_GPR_U32(ctx, 31, 0x1DBAA0u);
    ctx->pc = 0x1DBA9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4815));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAA0u; }
        else if (ctx->pc != 0x1DBAA0u) { ctx->pc = 0x1DBAA0u; }
    }
    if (ctx->pc != 0x1DBAA0u) { return; }
    ctx->pc = 0x1DBAA0u;
    // 0x1dbaa0: 0x70408628
    ctx->pc = 0x1dbaa0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbaa4: 0x27848d4c
    ctx->pc = 0x1dbaa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dbaa8: 0xc07f208
    ctx->pc = 0x1DBAA8u;
    SET_GPR_U32(ctx, 31, 0x1DBAB0u);
    ctx->pc = 0x1DBAACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4816));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAB0u; }
        else if (ctx->pc != 0x1DBAB0u) { ctx->pc = 0x1DBAB0u; }
    }
    if (ctx->pc != 0x1DBAB0u) { return; }
    ctx->pc = 0x1DBAB0u;
    // 0x1dbab0: 0x70408e28
    ctx->pc = 0x1dbab0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbab4: 0x70009628
    ctx->pc = 0x1dbab4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbab8: 0x10000031
    ctx->pc = 0x1DBAB8u;
    {
        const bool branch_taken_0x1dbab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBABCu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dbab8) {
            ctx->pc = 0x1DBB80u;
            goto label_1dbb80;
        }
    }
    ctx->pc = 0x1DBAC0u;
label_1dbac0:
    // 0x1dbac0: 0xc07f208
    ctx->pc = 0x1DBAC0u;
    SET_GPR_U32(ctx, 31, 0x1DBAC8u);
    ctx->pc = 0x1DBAC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAC8u; }
        else if (ctx->pc != 0x1DBAC8u) { ctx->pc = 0x1DBAC8u; }
    }
    if (ctx->pc != 0x1DBAC8u) { return; }
    ctx->pc = 0x1DBAC8u;
    // 0x1dbac8: 0x2a410008
    ctx->pc = 0x1dbac8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 8));
    // 0x1dbacc: 0x1020000b
    ctx->pc = 0x1DBACCu;
    {
        const bool branch_taken_0x1dbacc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBAD0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 11));
        if (branch_taken_0x1dbacc) {
            ctx->pc = 0x1DBAFCu;
            goto label_1dbafc;
        }
    }
    ctx->pc = 0x1DBAD4u;
    // 0x1dbad4: 0x8e840054
    ctx->pc = 0x1dbad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dbad8: 0x3c03001b
    ctx->pc = 0x1dbad8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dbadc: 0x34650077
    ctx->pc = 0x1dbadcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 119));
    // 0x1dbae0: 0x70403628
    ctx->pc = 0x1dbae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbae4: 0x72003e28
    ctx->pc = 0x1dbae4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dbae8: 0xc079e80
    ctx->pc = 0x1DBAE8u;
    SET_GPR_U32(ctx, 31, 0x1DBAF0u);
    ctx->pc = 0x1DBAECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAF0u; }
        else if (ctx->pc != 0x1DBAF0u) { ctx->pc = 0x1DBAF0u; }
    }
    if (ctx->pc != 0x1DBAF0u) { return; }
    ctx->pc = 0x1DBAF0u;
    // 0x1dbaf0: 0x10000016
    ctx->pc = 0x1DBAF0u;
    {
        const bool branch_taken_0x1dbaf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBAF4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1dbaf0) {
            ctx->pc = 0x1DBB4Cu;
            goto label_1dbb4c;
        }
    }
    ctx->pc = 0x1DBAF8u;
    // 0x1dbaf8: 0x2a41000b
    ctx->pc = 0x1dbaf8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 11));
label_1dbafc:
    // 0x1dbafc: 0x1020000a
    ctx->pc = 0x1DBAFCu;
    {
        const bool branch_taken_0x1dbafc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbafc) {
            ctx->pc = 0x1DBB28u;
            goto label_1dbb28;
        }
    }
    ctx->pc = 0x1DBB04u;
    // 0x1dbb04: 0x8e840054
    ctx->pc = 0x1dbb04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dbb08: 0x3c03003a
    ctx->pc = 0x1dbb08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x1dbb0c: 0x34650032
    ctx->pc = 0x1dbb0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 50));
    // 0x1dbb10: 0x70403628
    ctx->pc = 0x1dbb10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbb14: 0x72203e28
    ctx->pc = 0x1dbb14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dbb18: 0xc079e80
    ctx->pc = 0x1DBB18u;
    SET_GPR_U32(ctx, 31, 0x1DBB20u);
    ctx->pc = 0x1DBB1Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB20u; }
        else if (ctx->pc != 0x1DBB20u) { ctx->pc = 0x1DBB20u; }
    }
    if (ctx->pc != 0x1DBB20u) { return; }
    ctx->pc = 0x1DBB20u;
    // 0x1dbb20: 0x10000009
    ctx->pc = 0x1DBB20u;
    {
        const bool branch_taken_0x1dbb20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb20) {
            ctx->pc = 0x1DBB48u;
            goto label_1dbb48;
        }
    }
    ctx->pc = 0x1DBB28u;
label_1dbb28:
    // 0x1dbb28: 0x8e840054
    ctx->pc = 0x1dbb28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dbb2c: 0x3c03001b
    ctx->pc = 0x1dbb2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dbb30: 0x346500b3
    ctx->pc = 0x1dbb30u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1dbb34: 0x70403628
    ctx->pc = 0x1dbb34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbb38: 0x72203e28
    ctx->pc = 0x1dbb38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dbb3c: 0xc079e80
    ctx->pc = 0x1DBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB44u);
    ctx->pc = 0x1DBB40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB44u; }
        else if (ctx->pc != 0x1DBB44u) { ctx->pc = 0x1DBB44u; }
    }
    if (ctx->pc != 0x1DBB44u) { return; }
    ctx->pc = 0x1DBB44u;
    // 0x1dbb44: 0x0
    ctx->pc = 0x1dbb44u;
    // NOP
label_1dbb48:
    // 0x1dbb48: 0xc68c002c
    ctx->pc = 0x1dbb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dbb4c:
    // 0x1dbb4c: 0x3c033f80
    ctx->pc = 0x1dbb4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dbb50: 0x44830000
    ctx->pc = 0x1dbb50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dbb54: 0x0
    ctx->pc = 0x1dbb54u;
    // NOP
    // 0x1dbb58: 0x460c0032
    ctx->pc = 0x1dbb58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbb5c: 0x0
    ctx->pc = 0x1dbb5cu;
    // NOP
    // 0x1dbb60: 0x45030006
    ctx->pc = 0x1DBB60u;
    {
        const bool branch_taken_0x1dbb60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbb60) {
            ctx->pc = 0x1DBB64u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
            ctx->pc = 0x1DBB7Cu;
            goto label_1dbb7c;
        }
    }
    ctx->pc = 0x1DBB68u;
    // 0x1dbb68: 0x8e820054
    ctx->pc = 0x1dbb68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dbb6c: 0xc079ecc
    ctx->pc = 0x1DBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB74u);
    ctx->pc = 0x1DBB70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB74u; }
        else if (ctx->pc != 0x1DBB74u) { ctx->pc = 0x1DBB74u; }
    }
    if (ctx->pc != 0x1DBB74u) { return; }
    ctx->pc = 0x1DBB74u;
    // 0x1dbb74: 0x0
    ctx->pc = 0x1dbb74u;
    // NOP
    // 0x1dbb78: 0x267300f0
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
label_1dbb7c:
    // 0x1dbb7c: 0x26520001
    ctx->pc = 0x1dbb7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1dbb80:
    // 0x1dbb80: 0x8e830000
    ctx->pc = 0x1dbb80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1dbb84: 0x243182a
    ctx->pc = 0x1dbb84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1dbb88: 0x1460ffcd
    ctx->pc = 0x1DBB88u;
    {
        const bool branch_taken_0x1dbb88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DBB8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4774));
        if (branch_taken_0x1dbb88) {
            ctx->pc = 0x1DBAC0u;
            goto label_1dbac0;
        }
    }
    ctx->pc = 0x1DBB90u;
    // 0x1dbb90: 0x3c030027
    ctx->pc = 0x1dbb90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dbb94: 0x24638cc8
    ctx->pc = 0x1dbb94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937800));
    // 0x1dbb98: 0xc4620000
    ctx->pc = 0x1dbb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbb9c: 0xc4610004
    ctx->pc = 0x1dbb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbba0: 0xc4600008
    ctx->pc = 0x1dbba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbba4: 0xe6820114
    ctx->pc = 0x1dbba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 276), bits); }
    // 0x1dbba8: 0xe6810118
    ctx->pc = 0x1dbba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 280), bits); }
    // 0x1dbbac: 0xe680011c
    ctx->pc = 0x1dbbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 284), bits); }
    // 0x1dbbb0: 0x7bbf0050
    ctx->pc = 0x1dbbb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dbbb4: 0x7bb40040
    ctx->pc = 0x1dbbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dbbb8: 0x7bb30030
    ctx->pc = 0x1dbbb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbbbc: 0x7bb20020
    ctx->pc = 0x1dbbbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbbc0: 0x7bb10010
    ctx->pc = 0x1dbbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbbc4: 0x7bb00000
    ctx->pc = 0x1dbbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbc8: 0x3e00008
    ctx->pc = 0x1DBBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBAC0u: goto label_1dbac0;
            case 0x1DBAFCu: goto label_1dbafc;
            case 0x1DBB28u: goto label_1dbb28;
            case 0x1DBB48u: goto label_1dbb48;
            case 0x1DBB4Cu: goto label_1dbb4c;
            case 0x1DBB7Cu: goto label_1dbb7c;
            case 0x1DBB80u: goto label_1dbb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBBD0u;
}
