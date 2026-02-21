#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClockOncePerFrame
// Address: 0x202e20 - 0x20315c
void ClockOncePerFrame_0x202e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202e20u;

    // 0x202e20: 0x27bdffd0
    ctx->pc = 0x202e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202e24: 0xffbf0020
    ctx->pc = 0x202e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202e28: 0xffb10010
    ctx->pc = 0x202e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x202e2c: 0xffb00000
    ctx->pc = 0x202e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202e30: 0x802d
    ctx->pc = 0x202e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e34: 0x3c020031
    ctx->pc = 0x202e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202e38: 0xdc420e28
    ctx->pc = 0x202e38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x202e3c: 0x30420008
    ctx->pc = 0x202e3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x202e40: 0x1040001f
    ctx->pc = 0x202E40u;
    {
        const bool branch_taken_0x202e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202E44u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202e40) {
            ctx->pc = 0x202EC0u;
            goto label_202ec0;
        }
    }
    ctx->pc = 0x202E48u;
    // 0x202e48: 0x3c020031
    ctx->pc = 0x202e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202e4c: 0xdc420e38
    ctx->pc = 0x202e4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3640)));
    // 0x202e50: 0x34038000
    ctx->pc = 0x202e50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x202e54: 0x31d38
    ctx->pc = 0x202e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x202e58: 0x431024
    ctx->pc = 0x202e58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202e5c: 0x10400006
    ctx->pc = 0x202E5Cu;
    {
        const bool branch_taken_0x202e5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202E60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x202e5c) {
            ctx->pc = 0x202E78u;
            goto label_202e78;
        }
    }
    ctx->pc = 0x202E64u;
    // 0x202e64: 0x802d
    ctx->pc = 0x202e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e68: 0x24110001
    ctx->pc = 0x202e68u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x202e6c: 0x3c020031
    ctx->pc = 0x202e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202e70: 0x10000013
    ctx->pc = 0x202E70u;
    {
        const bool branch_taken_0x202e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202E74u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967200), GPR_U32(ctx, 0));
        if (branch_taken_0x202e70) {
            ctx->pc = 0x202EC0u;
            goto label_202ec0;
        }
    }
    ctx->pc = 0x202E78u;
label_202e78:
    // 0x202e78: 0x3c020031
    ctx->pc = 0x202e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202e7c: 0xdc420e28
    ctx->pc = 0x202e7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x202e80: 0x34038000
    ctx->pc = 0x202e80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x202e84: 0x31d38
    ctx->pc = 0x202e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x202e88: 0x431024
    ctx->pc = 0x202e88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202e8c: 0x1040000c
    ctx->pc = 0x202E8Cu;
    {
        const bool branch_taken_0x202e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202E90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x202e8c) {
            ctx->pc = 0x202EC0u;
            goto label_202ec0;
        }
    }
    ctx->pc = 0x202E94u;
    // 0x202e94: 0x8c83ffa0
    ctx->pc = 0x202e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294967200)));
    // 0x202e98: 0x2862003c
    ctx->pc = 0x202e98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 60));
    // 0x202e9c: 0x54400004
    ctx->pc = 0x202E9Cu;
    {
        const bool branch_taken_0x202e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x202e9c) {
            ctx->pc = 0x202EA0u;
            SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
            ctx->pc = 0x202EB0u;
            goto label_202eb0;
        }
    }
    ctx->pc = 0x202EA4u;
    // 0x202ea4: 0x802d
    ctx->pc = 0x202ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ea8: 0x10000004
    ctx->pc = 0x202EA8u;
    {
        const bool branch_taken_0x202ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202EACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967292));
        if (branch_taken_0x202ea8) {
            ctx->pc = 0x202EBCu;
            goto label_202ebc;
        }
    }
    ctx->pc = 0x202EB0u;
label_202eb0:
    // 0x202eb0: 0x8c82ffa0
    ctx->pc = 0x202eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294967200)));
    // 0x202eb4: 0x8c63ffc0
    ctx->pc = 0x202eb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x202eb8: 0x431021
    ctx->pc = 0x202eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_202ebc:
    // 0x202ebc: 0xac82ffa0
    ctx->pc = 0x202ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967200), GPR_U32(ctx, 2));
label_202ec0:
    // 0x202ec0: 0x3c020031
    ctx->pc = 0x202ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202ec4: 0xdc420e28
    ctx->pc = 0x202ec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x202ec8: 0x30420004
    ctx->pc = 0x202ec8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x202ecc: 0x10400005
    ctx->pc = 0x202ECCu;
    {
        const bool branch_taken_0x202ecc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x202ecc) {
            ctx->pc = 0x202EE4u;
            goto label_202ee4;
        }
    }
    ctx->pc = 0x202ED4u;
    // 0x202ed4: 0x8c420018
    ctx->pc = 0x202ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x202ed8: 0x24030001
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x202edc: 0x38424010
    ctx->pc = 0x202edcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 16400));
    // 0x202ee0: 0x62800a
    ctx->pc = 0x202ee0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_202ee4:
    // 0x202ee4: 0x3c060031
    ctx->pc = 0x202ee4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x202ee8: 0x3c04003a
    ctx->pc = 0x202ee8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x202eec: 0x3c050031
    ctx->pc = 0x202eecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x202ef0: 0x8c8222f8
    ctx->pc = 0x202ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8952)));
    // 0x202ef4: 0x8ca3ff90
    ctx->pc = 0x202ef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294967184)));
    // 0x202ef8: 0x431023
    ctx->pc = 0x202ef8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202efc: 0xacc2ffbc
    ctx->pc = 0x202efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967228), GPR_U32(ctx, 2));
    // 0x202f00: 0x3c030031
    ctx->pc = 0x202f00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202f04: 0xac62ffc0
    ctx->pc = 0x202f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967232), GPR_U32(ctx, 2));
    // 0x202f08: 0x8c8222f8
    ctx->pc = 0x202f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8952)));
    // 0x202f0c: 0xc0abc02
    ctx->pc = 0x202F0Cu;
    SET_GPR_U32(ctx, 31, 0x202F14u);
    ctx->pc = 0x202F10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967184), GPR_U32(ctx, 2));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F14u; }
    }
    if (ctx->pc != 0x202F14u) { return; }
    ctx->pc = 0x202F14u;
    // 0x202f14: 0x3c030031
    ctx->pc = 0x202f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202f18: 0xac62ffc4
    ctx->pc = 0x202f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967236), GPR_U32(ctx, 2));
    // 0x202f1c: 0x3c050031
    ctx->pc = 0x202f1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x202f20: 0x3c040031
    ctx->pc = 0x202f20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x202f24: 0x8c83ff94
    ctx->pc = 0x202f24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294967188)));
    // 0x202f28: 0x431823
    ctx->pc = 0x202f28u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202f2c: 0xaca3ffc8
    ctx->pc = 0x202f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967240), GPR_U32(ctx, 3));
    // 0x202f30: 0xac82ff94
    ctx->pc = 0x202f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967188), GPR_U32(ctx, 2));
    // 0x202f34: 0x3c020032
    ctx->pc = 0x202f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x202f38: 0x8c42d358
    ctx->pc = 0x202f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x202f3c: 0x1440000a
    ctx->pc = 0x202F3Cu;
    {
        const bool branch_taken_0x202f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x202F40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x202f3c) {
            ctx->pc = 0x202F68u;
            goto label_202f68;
        }
    }
    ctx->pc = 0x202F44u;
    // 0x202f44: 0x3c020032
    ctx->pc = 0x202f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x202f48: 0x8c4208b8
    ctx->pc = 0x202f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2232)));
    // 0x202f4c: 0x54400006
    ctx->pc = 0x202F4Cu;
    {
        const bool branch_taken_0x202f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x202f4c) {
            ctx->pc = 0x202F50u;
            SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
            ctx->pc = 0x202F68u;
            goto label_202f68;
        }
    }
    ctx->pc = 0x202F54u;
    // 0x202f54: 0x1200000e
    ctx->pc = 0x202F54u;
    {
        const bool branch_taken_0x202f54 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x202f54) {
            ctx->pc = 0x202F90u;
            goto label_202f90;
        }
    }
    ctx->pc = 0x202F5Cu;
    // 0x202f5c: 0x16200016
    ctx->pc = 0x202F5Cu;
    {
        const bool branch_taken_0x202f5c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x202F60u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x202f5c) {
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202F64u;
    // 0x202f64: 0x3c020031
    ctx->pc = 0x202f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_202f68:
    // 0x202f68: 0xac40ffbc
    ctx->pc = 0x202f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967228), GPR_U32(ctx, 0));
    // 0x202f6c: 0x3c020032
    ctx->pc = 0x202f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x202f70: 0x8c43d358
    ctx->pc = 0x202f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x202f74: 0x24020064
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x202f78: 0x10620002
    ctx->pc = 0x202F78u;
    {
        const bool branch_taken_0x202f78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x202F7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x202f78) {
            ctx->pc = 0x202F84u;
            goto label_202f84;
        }
    }
    ctx->pc = 0x202F80u;
    // 0x202f80: 0xac40ffc8
    ctx->pc = 0x202f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967240), GPR_U32(ctx, 0));
label_202f84:
    // 0x202f84: 0x3c020031
    ctx->pc = 0x202f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202f88: 0x10000016
    ctx->pc = 0x202F88u;
    {
        const bool branch_taken_0x202f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202F8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967208), GPR_U32(ctx, 0));
        if (branch_taken_0x202f88) {
            ctx->pc = 0x202FE4u;
            goto label_202fe4;
        }
    }
    ctx->pc = 0x202F90u;
label_202f90:
    // 0x202f90: 0x16200009
    ctx->pc = 0x202F90u;
    {
        const bool branch_taken_0x202f90 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x202F94u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x202f90) {
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202F98u;
    // 0x202f98: 0x3c020031
    ctx->pc = 0x202f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202f9c: 0x8c43ffbc
    ctx->pc = 0x202f9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x202fa0: 0x2c62003d
    ctx->pc = 0x202fa0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 61));
    // 0x202fa4: 0x50400004
    ctx->pc = 0x202FA4u;
    {
        const bool branch_taken_0x202fa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x202fa4) {
            ctx->pc = 0x202FA8u;
            SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202FACu;
    // 0x202fac: 0x14600012
    ctx->pc = 0x202FACu;
    {
        const bool branch_taken_0x202fac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x202FB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x202fac) {
            ctx->pc = 0x202FF8u;
            goto label_202ff8;
        }
    }
    ctx->pc = 0x202FB4u;
    // 0x202fb4: 0x3c030031
    ctx->pc = 0x202fb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_202fb8:
    // 0x202fb8: 0x24020001
    ctx->pc = 0x202fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x202fbc: 0xac62ffbc
    ctx->pc = 0x202fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967228), GPR_U32(ctx, 2));
    // 0x202fc0: 0x3c030031
    ctx->pc = 0x202fc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202fc4: 0x3c020098
    ctx->pc = 0x202fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)152 << 16));
    // 0x202fc8: 0x34429680
    ctx->pc = 0x202fc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38528));
    // 0x202fcc: 0xac62ffc8
    ctx->pc = 0x202fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967240), GPR_U32(ctx, 2));
    // 0x202fd0: 0x3c020031
    ctx->pc = 0x202fd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202fd4: 0x3c013d08
    ctx->pc = 0x202fd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x202fd8: 0x34218889
    ctx->pc = 0x202fd8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x202fdc: 0x44810000
    ctx->pc = 0x202fdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x202fe0: 0xe440ffa8
    ctx->pc = 0x202fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967208), bits); }
label_202fe4:
    // 0x202fe4: 0x3c020031
    ctx->pc = 0x202fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202fe8: 0x3c0141f0
    ctx->pc = 0x202fe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x202fec: 0x44810000
    ctx->pc = 0x202fecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x202ff0: 0x10000020
    ctx->pc = 0x202FF0u;
    {
        const bool branch_taken_0x202ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202FF4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967212), bits); }
        if (branch_taken_0x202ff0) {
            ctx->pc = 0x203074u;
            goto label_203074;
        }
    }
    ctx->pc = 0x202FF8u;
label_202ff8:
    // 0x202ff8: 0x2445ffa8
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967208));
    // 0x202ffc: 0x3c030031
    ctx->pc = 0x202ffcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203000: 0x8c62ffbc
    ctx->pc = 0x203000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x203004: 0x4400005
    ctx->pc = 0x203004u;
    {
        const bool branch_taken_0x203004 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x203008u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x203004) {
            ctx->pc = 0x20301Cu;
            goto label_20301c;
        }
    }
    ctx->pc = 0x20300Cu;
    // 0x20300c: 0x44820800
    ctx->pc = 0x20300cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x203010: 0x46800860
    ctx->pc = 0x203010u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x203014: 0x10000008
    ctx->pc = 0x203014u;
    {
        const bool branch_taken_0x203014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x203014) {
            ctx->pc = 0x203038u;
            goto label_203038;
        }
    }
    ctx->pc = 0x20301Cu;
label_20301c:
    // 0x20301c: 0x8c820000
    ctx->pc = 0x20301cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203020: 0x30430001
    ctx->pc = 0x203020u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x203024: 0x21042
    ctx->pc = 0x203024u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x203028: 0x621825
    ctx->pc = 0x203028u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20302c: 0x44830800
    ctx->pc = 0x20302cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x203030: 0x46800860
    ctx->pc = 0x203030u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x203034: 0x46010840
    ctx->pc = 0x203034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_203038:
    // 0x203038: 0x3c014248
    ctx->pc = 0x203038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x20303c: 0x44810000
    ctx->pc = 0x20303cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x203040: 0x0
    ctx->pc = 0x203040u;
    // NOP
    // 0x203044: 0x0
    ctx->pc = 0x203044u;
    // NOP
    // 0x203048: 0x46000803
    ctx->pc = 0x203048u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x20304c: 0xe4a00000
    ctx->pc = 0x20304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x203050: 0x3c030031
    ctx->pc = 0x203050u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203054: 0x3c020031
    ctx->pc = 0x203054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203058: 0x3c013f80
    ctx->pc = 0x203058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20305c: 0x44810000
    ctx->pc = 0x20305cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x203060: 0xc441ffa8
    ctx->pc = 0x203060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203064: 0x0
    ctx->pc = 0x203064u;
    // NOP
    // 0x203068: 0x0
    ctx->pc = 0x203068u;
    // NOP
    // 0x20306c: 0x46010003
    ctx->pc = 0x20306cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x203070: 0xe460ffac
    ctx->pc = 0x203070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967212), bits); }
label_203074:
    // 0x203074: 0x3c040031
    ctx->pc = 0x203074u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x203078: 0x8c83ffc8
    ctx->pc = 0x203078u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294967240)));
    // 0x20307c: 0x3c0211e1
    ctx->pc = 0x20307cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4577 << 16));
    // 0x203080: 0x3442a300
    ctx->pc = 0x203080u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 41728));
    // 0x203084: 0x43102b
    ctx->pc = 0x203084u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203088: 0x10400003
    ctx->pc = 0x203088u;
    {
        const bool branch_taken_0x203088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20308Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)152 << 16));
        if (branch_taken_0x203088) {
            ctx->pc = 0x203098u;
            goto label_203098;
        }
    }
    ctx->pc = 0x203090u;
    // 0x203090: 0x34429680
    ctx->pc = 0x203090u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38528));
    // 0x203094: 0xac82ffc8
    ctx->pc = 0x203094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967240), GPR_U32(ctx, 2));
label_203098:
    // 0x203098: 0x16000028
    ctx->pc = 0x203098u;
    {
        const bool branch_taken_0x203098 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x20309Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x203098) {
            ctx->pc = 0x20313Cu;
            goto label_20313c;
        }
    }
    ctx->pc = 0x2030A0u;
    // 0x2030a0: 0x3c020032
    ctx->pc = 0x2030a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2030a4: 0x8c42d358
    ctx->pc = 0x2030a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x2030a8: 0x14400024
    ctx->pc = 0x2030A8u;
    {
        const bool branch_taken_0x2030a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2030ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2030a8) {
            ctx->pc = 0x20313Cu;
            goto label_20313c;
        }
    }
    ctx->pc = 0x2030B0u;
    // 0x2030b0: 0x3c030031
    ctx->pc = 0x2030b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2030b4: 0x3c020031
    ctx->pc = 0x2030b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2030b8: 0xc460ffa4
    ctx->pc = 0x2030b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2030bc: 0xc441ffa8
    ctx->pc = 0x2030bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2030c0: 0x46010000
    ctx->pc = 0x2030c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2030c4: 0xe460ffa4
    ctx->pc = 0x2030c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967204), bits); }
    // 0x2030c8: 0xc460ffa4
    ctx->pc = 0x2030c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2030cc: 0x3c014561
    ctx->pc = 0x2030ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17761 << 16));
    // 0x2030d0: 0x44810800
    ctx->pc = 0x2030d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2030d4: 0x46000834
    ctx->pc = 0x2030d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2030d8: 0x0
    ctx->pc = 0x2030d8u;
    // NOP
    // 0x2030dc: 0x45000005
    ctx->pc = 0x2030DCu;
    {
        const bool branch_taken_0x2030dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2030E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2030dc) {
            ctx->pc = 0x2030F4u;
            goto label_2030f4;
        }
    }
    ctx->pc = 0x2030E4u;
    // 0x2030e4: 0xc460ffa4
    ctx->pc = 0x2030e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2030e8: 0x46010001
    ctx->pc = 0x2030e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2030ec: 0xe460ffa4
    ctx->pc = 0x2030ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967204), bits); }
    // 0x2030f0: 0x3c020031
    ctx->pc = 0x2030f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2030f4:
    // 0x2030f4: 0x3c030031
    ctx->pc = 0x2030f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2030f8: 0xc460ffa4
    ctx->pc = 0x2030f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2030fc: 0x3c01447a
    ctx->pc = 0x2030fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x203100: 0x44810800
    ctx->pc = 0x203100u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x203104: 0x46010002
    ctx->pc = 0x203104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x203108: 0x3c013f00
    ctx->pc = 0x203108u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x20310c: 0x44810800
    ctx->pc = 0x20310cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x203110: 0x46010000
    ctx->pc = 0x203110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203114: 0x46000064
    ctx->pc = 0x203114u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x203118: 0xe441ffb0
    ctx->pc = 0x203118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967216), bits); }
    // 0x20311c: 0x3c020031
    ctx->pc = 0x20311cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203120: 0xc460ffa4
    ctx->pc = 0x203120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203124: 0xe440ffb4
    ctx->pc = 0x203124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967220), bits); }
    // 0x203128: 0x3c030031
    ctx->pc = 0x203128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20312c: 0x8c62ffb8
    ctx->pc = 0x20312cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967224)));
    // 0x203130: 0x24420001
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x203134: 0xac62ffb8
    ctx->pc = 0x203134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967224), GPR_U32(ctx, 2));
    // 0x203138: 0x3c020031
    ctx->pc = 0x203138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20313c:
    // 0x20313c: 0x3c030031
    ctx->pc = 0x20313cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203140: 0xc460ffa4
    ctx->pc = 0x203140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203144: 0xe440ff8c
    ctx->pc = 0x203144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), bits); }
    // 0x203148: 0xdfbf0020
    ctx->pc = 0x203148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20314c: 0xdfb10010
    ctx->pc = 0x20314cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203150: 0xdfb00000
    ctx->pc = 0x203150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203154: 0x3e00008
    ctx->pc = 0x203154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203158u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202E78u: goto label_202e78;
            case 0x202EB0u: goto label_202eb0;
            case 0x202EBCu: goto label_202ebc;
            case 0x202EC0u: goto label_202ec0;
            case 0x202EE4u: goto label_202ee4;
            case 0x202F68u: goto label_202f68;
            case 0x202F84u: goto label_202f84;
            case 0x202F90u: goto label_202f90;
            case 0x202FB8u: goto label_202fb8;
            case 0x202FE4u: goto label_202fe4;
            case 0x202FF8u: goto label_202ff8;
            case 0x20301Cu: goto label_20301c;
            case 0x203038u: goto label_203038;
            case 0x203074u: goto label_203074;
            case 0x203098u: goto label_203098;
            case 0x2030F4u: goto label_2030f4;
            case 0x20313Cu: goto label_20313c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20315Cu;
}
