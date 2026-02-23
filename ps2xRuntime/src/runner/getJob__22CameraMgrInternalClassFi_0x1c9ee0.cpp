#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getJob__22CameraMgrInternalClassFi
// Address: 0x1c9ee0 - 0x1ca0d8
void getJob__22CameraMgrInternalClassFi_0x1c9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getJob__22CameraMgrInternalClassFi");


    ctx->pc = 0x1c9ee0u;

    // 0x1c9ee0: 0x518c0
    ctx->pc = 0x1c9ee0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c9ee4: 0x651821
    ctx->pc = 0x1c9ee4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c9ee8: 0x33980
    ctx->pc = 0x1c9ee8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1c9eec: 0x873021
    ctx->pc = 0x1c9eecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c9ef0: 0x8cc80000
    ctx->pc = 0x1c9ef0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c9ef4: 0x2403ffff
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9ef8: 0x15030075
    ctx->pc = 0x1C9EF8u;
    {
        const bool branch_taken_0x1c9ef8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c9ef8) {
            ctx->pc = 0x1CA0D0u;
            goto label_1ca0d0;
        }
    }
    ctx->pc = 0x1C9F00u;
    // 0x1c9f00: 0x848d0900
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2304)));
    // 0x1c9f04: 0x84880902
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1c9f08: 0x10d082a
    ctx->pc = 0x1c9f08u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 13)));
    // 0x1c9f0c: 0x14200002
    ctx->pc = 0x1C9F0Cu;
    {
        const bool branch_taken_0x1c9f0c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C9F10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1c9f0c) {
            ctx->pc = 0x1C9F18u;
            goto label_1c9f18;
        }
    }
    ctx->pc = 0x1C9F14u;
    // 0x1c9f14: 0x70001e28
    ctx->pc = 0x1c9f14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9f18:
    // 0x1c9f18: 0x1036021
    ctx->pc = 0x1c9f18u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1c9f1c: 0x1ac082a
    ctx->pc = 0x1c9f1cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 12)));
    // 0x1c9f20: 0x1020006b
    ctx->pc = 0x1C9F20u;
    {
        const bool branch_taken_0x1c9f20 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9F24u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c9f20) {
            ctx->pc = 0x1CA0D0u;
            goto label_1ca0d0;
        }
    }
    ctx->pc = 0x1C9F28u;
    // 0x1c9f28: 0x31a30007
    ctx->pc = 0x1c9f28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 13), 7));
label_1c9f2c:
    // 0x1c9f2c: 0x340c0
    ctx->pc = 0x1c9f2cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c9f30: 0x885021
    ctx->pc = 0x1c9f30u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1c9f34: 0x81490908
    ctx->pc = 0x1c9f34u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2312)));
    // 0x1c9f38: 0x552b0062
    ctx->pc = 0x1C9F38u;
    {
        const bool branch_taken_0x1c9f38 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 11));
        if (branch_taken_0x1c9f38) {
            ctx->pc = 0x1C9F3Cu;
            SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
            ctx->pc = 0x1CA0C4u;
            goto label_1ca0c4;
        }
    }
    ctx->pc = 0x1C9F40u;
    // 0x1c9f40: 0x8d4a0904
    ctx->pc = 0x1c9f40u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 10), 2308)));
    // 0x1c9f44: 0x8d490004
    ctx->pc = 0x1c9f44u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1c9f48: 0x1525005d
    ctx->pc = 0x1C9F48u;
    {
        const bool branch_taken_0x1c9f48 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f48) {
            ctx->pc = 0x1CA0C0u;
            goto label_1ca0c0;
        }
    }
    ctx->pc = 0x1C9F50u;
    // 0x1c9f50: 0x8d490008
    ctx->pc = 0x1c9f50u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1c9f54: 0x24050040
    ctx->pc = 0x1c9f54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c9f58: 0x11250049
    ctx->pc = 0x1C9F58u;
    {
        const bool branch_taken_0x1c9f58 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f58) {
            ctx->pc = 0x1CA080u;
            goto label_1ca080;
        }
    }
    ctx->pc = 0x1C9F60u;
    // 0x1c9f60: 0x24050030
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9f64: 0x1125003b
    ctx->pc = 0x1C9F64u;
    {
        const bool branch_taken_0x1c9f64 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f64) {
            ctx->pc = 0x1CA054u;
            goto label_1ca054;
        }
    }
    ctx->pc = 0x1C9F6Cu;
    // 0x1c9f6c: 0x24050013
    ctx->pc = 0x1c9f6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c9f70: 0x1125002d
    ctx->pc = 0x1C9F70u;
    {
        const bool branch_taken_0x1c9f70 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f70) {
            ctx->pc = 0x1CA028u;
            goto label_1ca028;
        }
    }
    ctx->pc = 0x1C9F78u;
    // 0x1c9f78: 0x24050012
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c9f7c: 0x1125001f
    ctx->pc = 0x1C9F7Cu;
    {
        const bool branch_taken_0x1c9f7c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f7c) {
            ctx->pc = 0x1C9FFCu;
            goto label_1c9ffc;
        }
    }
    ctx->pc = 0x1C9F84u;
    // 0x1c9f84: 0x24050011
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c9f88: 0x11250011
    ctx->pc = 0x1C9F88u;
    {
        const bool branch_taken_0x1c9f88 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f88) {
            ctx->pc = 0x1C9FD0u;
            goto label_1c9fd0;
        }
    }
    ctx->pc = 0x1C9F90u;
    // 0x1c9f90: 0x24050010
    ctx->pc = 0x1c9f90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9f94: 0x11250003
    ctx->pc = 0x1C9F94u;
    {
        const bool branch_taken_0x1c9f94 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c9f94) {
            ctx->pc = 0x1C9FA4u;
            goto label_1c9fa4;
        }
    }
    ctx->pc = 0x1C9F9Cu;
    // 0x1c9f9c: 0x10000043
    ctx->pc = 0x1C9F9Cu;
    {
        const bool branch_taken_0x1c9f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9FA0u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x1c9f9c) {
            ctx->pc = 0x1CA0ACu;
            goto label_1ca0ac;
        }
    }
    ctx->pc = 0x1C9FA4u;
label_1c9fa4:
    // 0x1c9fa4: 0xacc50000
    ctx->pc = 0x1c9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1c9fa8: 0x3c050026
    ctx->pc = 0x1c9fa8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1c9fac: 0x24a54ea8
    ctx->pc = 0x1c9facu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20136));
    // 0x1c9fb0: 0xc4a20000
    ctx->pc = 0x1c9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9fb4: 0xc4a10004
    ctx->pc = 0x1c9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9fb8: 0xc4a00008
    ctx->pc = 0x1c9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fbc: 0xe43021
    ctx->pc = 0x1c9fbcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1c9fc0: 0xe4c20004
    ctx->pc = 0x1c9fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1c9fc4: 0xe4c10008
    ctx->pc = 0x1c9fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1c9fc8: 0x10000037
    ctx->pc = 0x1C9FC8u;
    {
        const bool branch_taken_0x1c9fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9FCCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        if (branch_taken_0x1c9fc8) {
            ctx->pc = 0x1CA0A8u;
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1C9FD0u;
label_1c9fd0:
    // 0x1c9fd0: 0xacc50000
    ctx->pc = 0x1c9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1c9fd4: 0x3c050026
    ctx->pc = 0x1c9fd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1c9fd8: 0x24a54eb8
    ctx->pc = 0x1c9fd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20152));
    // 0x1c9fdc: 0xc4a20000
    ctx->pc = 0x1c9fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9fe0: 0xc4a10004
    ctx->pc = 0x1c9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9fe4: 0xc4a00008
    ctx->pc = 0x1c9fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fe8: 0xe43021
    ctx->pc = 0x1c9fe8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1c9fec: 0xe4c20004
    ctx->pc = 0x1c9fecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1c9ff0: 0xe4c10008
    ctx->pc = 0x1c9ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1c9ff4: 0x1000002c
    ctx->pc = 0x1C9FF4u;
    {
        const bool branch_taken_0x1c9ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9FF8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        if (branch_taken_0x1c9ff4) {
            ctx->pc = 0x1CA0A8u;
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1C9FFCu;
label_1c9ffc:
    // 0x1c9ffc: 0xacc50000
    ctx->pc = 0x1c9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1ca000: 0x3c050026
    ctx->pc = 0x1ca000u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1ca004: 0x24a54ec8
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20168));
    // 0x1ca008: 0xc4a20000
    ctx->pc = 0x1ca008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca00c: 0xc4a10004
    ctx->pc = 0x1ca00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca010: 0xc4a00008
    ctx->pc = 0x1ca010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca014: 0xe43021
    ctx->pc = 0x1ca014u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca018: 0xe4c20004
    ctx->pc = 0x1ca018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1ca01c: 0xe4c10008
    ctx->pc = 0x1ca01cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1ca020: 0x10000021
    ctx->pc = 0x1CA020u;
    {
        const bool branch_taken_0x1ca020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA024u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        if (branch_taken_0x1ca020) {
            ctx->pc = 0x1CA0A8u;
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1CA028u;
label_1ca028:
    // 0x1ca028: 0xacc50000
    ctx->pc = 0x1ca028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1ca02c: 0x3c050026
    ctx->pc = 0x1ca02cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1ca030: 0x24a54ed8
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20184));
    // 0x1ca034: 0xc4a20000
    ctx->pc = 0x1ca034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca038: 0xc4a10004
    ctx->pc = 0x1ca038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca03c: 0xc4a00008
    ctx->pc = 0x1ca03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca040: 0xe43021
    ctx->pc = 0x1ca040u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca044: 0xe4c20004
    ctx->pc = 0x1ca044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1ca048: 0xe4c10008
    ctx->pc = 0x1ca048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1ca04c: 0x10000016
    ctx->pc = 0x1CA04Cu;
    {
        const bool branch_taken_0x1ca04c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA050u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        if (branch_taken_0x1ca04c) {
            ctx->pc = 0x1CA0A8u;
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1CA054u;
label_1ca054:
    // 0x1ca054: 0xacc50000
    ctx->pc = 0x1ca054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1ca058: 0x3c050026
    ctx->pc = 0x1ca058u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1ca05c: 0x24a54ee8
    ctx->pc = 0x1ca05cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20200));
    // 0x1ca060: 0xc4a20000
    ctx->pc = 0x1ca060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca064: 0xc4a10004
    ctx->pc = 0x1ca064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca068: 0xc4a00008
    ctx->pc = 0x1ca068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca06c: 0xe43021
    ctx->pc = 0x1ca06cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca070: 0xe4c20004
    ctx->pc = 0x1ca070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1ca074: 0xe4c10008
    ctx->pc = 0x1ca074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1ca078: 0x1000000b
    ctx->pc = 0x1CA078u;
    {
        const bool branch_taken_0x1ca078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA07Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        if (branch_taken_0x1ca078) {
            ctx->pc = 0x1CA0A8u;
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1CA080u;
label_1ca080:
    // 0x1ca080: 0xacc50000
    ctx->pc = 0x1ca080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1ca084: 0x3c050026
    ctx->pc = 0x1ca084u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1ca088: 0x24a54ef8
    ctx->pc = 0x1ca088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20216));
    // 0x1ca08c: 0xc4a20000
    ctx->pc = 0x1ca08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca090: 0xc4a10004
    ctx->pc = 0x1ca090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca094: 0xc4a00008
    ctx->pc = 0x1ca094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca098: 0xe43021
    ctx->pc = 0x1ca098u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca09c: 0xe4c20004
    ctx->pc = 0x1ca09cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1ca0a0: 0xe4c10008
    ctx->pc = 0x1ca0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1ca0a4: 0xe4c0000c
    ctx->pc = 0x1ca0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1ca0a8:
    // 0x1ca0a8: 0x1042821
    ctx->pc = 0x1ca0a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1ca0ac:
    // 0x1ca0ac: 0x24060002
    ctx->pc = 0x1ca0acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca0b0: 0xe42021
    ctx->pc = 0x1ca0b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca0b4: 0xa0a60908
    ctx->pc = 0x1ca0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2312), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ca0b8: 0x10000005
    ctx->pc = 0x1CA0B8u;
    {
        const bool branch_taken_0x1ca0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA0BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x1ca0b8) {
            ctx->pc = 0x1CA0D0u;
            goto label_1ca0d0;
        }
    }
    ctx->pc = 0x1CA0C0u;
label_1ca0c0:
    // 0x1ca0c0: 0x25ad0001
    ctx->pc = 0x1ca0c0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_1ca0c4:
    // 0x1ca0c4: 0x1ac182a
    ctx->pc = 0x1ca0c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 12)));
    // 0x1ca0c8: 0x1460ff98
    ctx->pc = 0x1CA0C8u;
    {
        const bool branch_taken_0x1ca0c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA0CCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 13), 7));
        if (branch_taken_0x1ca0c8) {
            ctx->pc = 0x1C9F2Cu;
            goto label_1c9f2c;
        }
    }
    ctx->pc = 0x1CA0D0u;
label_1ca0d0:
    // 0x1ca0d0: 0x3e00008
    ctx->pc = 0x1CA0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9F18u: goto label_1c9f18;
            case 0x1C9F2Cu: goto label_1c9f2c;
            case 0x1C9FA4u: goto label_1c9fa4;
            case 0x1C9FD0u: goto label_1c9fd0;
            case 0x1C9FFCu: goto label_1c9ffc;
            case 0x1CA028u: goto label_1ca028;
            case 0x1CA054u: goto label_1ca054;
            case 0x1CA080u: goto label_1ca080;
            case 0x1CA0A8u: goto label_1ca0a8;
            case 0x1CA0ACu: goto label_1ca0ac;
            case 0x1CA0C0u: goto label_1ca0c0;
            case 0x1CA0C4u: goto label_1ca0c4;
            case 0x1CA0D0u: goto label_1ca0d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA0D8u;
}
