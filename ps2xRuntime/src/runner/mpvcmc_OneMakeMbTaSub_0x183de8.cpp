#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_OneMakeMbTaSub
// Address: 0x183de8 - 0x183f9c
void mpvcmc_OneMakeMbTaSub_0x183de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_OneMakeMbTaSub");


    ctx->pc = 0x183de8u;

    // 0x183de8: 0x27bdffd0
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183dec: 0x80682d
    ctx->pc = 0x183decu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183df0: 0xffb20020
    ctx->pc = 0x183df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x183df4: 0x382d
    ctx->pc = 0x183df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183df8: 0xffb10010
    ctx->pc = 0x183df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x183dfc: 0xffb00000
    ctx->pc = 0x183dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183e00: 0x8cae0000
    ctx->pc = 0x183e00u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183e04: 0x8caf0004
    ctx->pc = 0x183e04u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x183e08: 0x8caa0008
    ctx->pc = 0x183e08u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x183e0c: 0x0
    ctx->pc = 0x183e0cu;
    // NOP
label_183e10:
    // 0x183e10: 0x4c00005
    ctx->pc = 0x183E10u;
    {
        const bool branch_taken_0x183e10 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x183E14u;
        SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x183e10) {
            ctx->pc = 0x183E28u;
            goto label_183e28;
        }
    }
    ctx->pc = 0x183E18u;
    // 0x183e18: 0x24f00001
    ctx->pc = 0x183e18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 1));
    // 0x183e1c: 0x25ef0080
    ctx->pc = 0x183e1cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 128));
    // 0x183e20: 0x10000042
    ctx->pc = 0x183E20u;
    {
        const bool branch_taken_0x183e20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183E24u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 13), 32));
        if (branch_taken_0x183e20) {
            ctx->pc = 0x183F2Cu;
            goto label_183f2c;
        }
    }
    ctx->pc = 0x183E28u;
label_183e28:
    // 0x183e28: 0x24f00001
    ctx->pc = 0x183e28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 1));
    // 0x183e2c: 0x25b20020
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 13), 32));
    // 0x183e30: 0x24190007
    ctx->pc = 0x183e30u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 7));
    // 0x183e34: 0x254c0007
    ctx->pc = 0x183e34u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 10), 7));
    // 0x183e38: 0x25490001
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 10), 1));
    // 0x183e3c: 0x25f8000e
    ctx->pc = 0x183e3cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 15), 14));
    // 0x183e40: 0x25eb0002
    ctx->pc = 0x183e40u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 15), 2));
    // 0x183e44: 0x0
    ctx->pc = 0x183e44u;
    // NOP
label_183e48:
    // 0x183e48: 0x8703fff2
    ctx->pc = 0x183e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294967282)));
    // 0x183e4c: 0x25ef0010
    ctx->pc = 0x183e4cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 16));
    // 0x183e50: 0x9182fff9
    ctx->pc = 0x183e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967289)));
    // 0x183e54: 0x254a0008
    ctx->pc = 0x183e54u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
    // 0x183e58: 0x2739ffff
    ctx->pc = 0x183e58u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x183e5c: 0x431021
    ctx->pc = 0x183e5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183e60: 0x1c21021
    ctx->pc = 0x183e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x183e64: 0x90430000
    ctx->pc = 0x183e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183e68: 0xa183fff9
    ctx->pc = 0x183e68u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294967289), (uint8_t)GPR_U32(ctx, 3));
    // 0x183e6c: 0x85640000
    ctx->pc = 0x183e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x183e70: 0x91220000
    ctx->pc = 0x183e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x183e74: 0x91230001
    ctx->pc = 0x183e74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x183e78: 0x441021
    ctx->pc = 0x183e78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183e7c: 0x91250002
    ctx->pc = 0x183e7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x183e80: 0x1c21021
    ctx->pc = 0x183e80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x183e84: 0x91260003
    ctx->pc = 0x183e84u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x183e88: 0x90440000
    ctx->pc = 0x183e88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183e8c: 0x91270004
    ctx->pc = 0x183e8cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x183e90: 0xa1240000
    ctx->pc = 0x183e90u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x183e94: 0x91280005
    ctx->pc = 0x183e94u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x183e98: 0x85620002
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x183e9c: 0x621821
    ctx->pc = 0x183e9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183ea0: 0x1c31821
    ctx->pc = 0x183ea0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x183ea4: 0x90620000
    ctx->pc = 0x183ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183ea8: 0xa1220001
    ctx->pc = 0x183ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x183eac: 0x85630004
    ctx->pc = 0x183eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x183eb0: 0xa32821
    ctx->pc = 0x183eb0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x183eb4: 0x1c52821
    ctx->pc = 0x183eb4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x183eb8: 0x90a20000
    ctx->pc = 0x183eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183ebc: 0xa1220002
    ctx->pc = 0x183ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x183ec0: 0x85630006
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x183ec4: 0xc33021
    ctx->pc = 0x183ec4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x183ec8: 0x1c63021
    ctx->pc = 0x183ec8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x183ecc: 0x90c20000
    ctx->pc = 0x183eccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x183ed0: 0xa1220003
    ctx->pc = 0x183ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x183ed4: 0x85630008
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x183ed8: 0xe33821
    ctx->pc = 0x183ed8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x183edc: 0x1c73821
    ctx->pc = 0x183edcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x183ee0: 0x90e20000
    ctx->pc = 0x183ee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183ee4: 0xa1220004
    ctx->pc = 0x183ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x183ee8: 0x8563000a
    ctx->pc = 0x183ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x183eec: 0x25eb0002
    ctx->pc = 0x183eecu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 15), 2));
    // 0x183ef0: 0x1034021
    ctx->pc = 0x183ef0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x183ef4: 0x1c84021
    ctx->pc = 0x183ef4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x183ef8: 0x91020000
    ctx->pc = 0x183ef8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183efc: 0xa1220005
    ctx->pc = 0x183efcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x183f00: 0x25490001
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 10), 1));
    // 0x183f04: 0x87030000
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x183f08: 0x91820000
    ctx->pc = 0x183f08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x183f0c: 0x27180010
    ctx->pc = 0x183f0cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 16));
    // 0x183f10: 0x431021
    ctx->pc = 0x183f10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183f14: 0x1c21021
    ctx->pc = 0x183f14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x183f18: 0x90430000
    ctx->pc = 0x183f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183f1c: 0xa1830000
    ctx->pc = 0x183f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x183f20: 0x721ffc9
    ctx->pc = 0x183F20u;
    {
        const bool branch_taken_0x183f20 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x183F24u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
        if (branch_taken_0x183f20) {
            ctx->pc = 0x183E48u;
            goto label_183e48;
        }
    }
    ctx->pc = 0x183F28u;
    // 0x183f28: 0x254affc0
    ctx->pc = 0x183f28u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967232));
label_183f2c:
    // 0x183f2c: 0xdd430000
    ctx->pc = 0x183f2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x183f30: 0x200382d
    ctx->pc = 0x183f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f34: 0x220302d
    ctx->pc = 0x183f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f38: 0x28e40006
    ctx->pc = 0x183f38u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), 6));
    // 0x183f3c: 0xfda30000
    ctx->pc = 0x183f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
    // 0x183f40: 0xdd420008
    ctx->pc = 0x183f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x183f44: 0xfda20008
    ctx->pc = 0x183f44u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 2));
    // 0x183f48: 0xdd430010
    ctx->pc = 0x183f48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x183f4c: 0xfda30010
    ctx->pc = 0x183f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 16), GPR_U64(ctx, 3));
    // 0x183f50: 0xdd420018
    ctx->pc = 0x183f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x183f54: 0xfda20018
    ctx->pc = 0x183f54u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 24), GPR_U64(ctx, 2));
    // 0x183f58: 0x240682d
    ctx->pc = 0x183f58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f5c: 0xdd420020
    ctx->pc = 0x183f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x183f60: 0xfda20000
    ctx->pc = 0x183f60u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
    // 0x183f64: 0xdd430028
    ctx->pc = 0x183f64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x183f68: 0xfda30008
    ctx->pc = 0x183f68u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 3));
    // 0x183f6c: 0xdd420030
    ctx->pc = 0x183f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x183f70: 0xfda20010
    ctx->pc = 0x183f70u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 16), GPR_U64(ctx, 2));
    // 0x183f74: 0xdd430038
    ctx->pc = 0x183f74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x183f78: 0x254a0040
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 64));
    // 0x183f7c: 0xfda30018
    ctx->pc = 0x183f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 24), GPR_U64(ctx, 3));
    // 0x183f80: 0x1480ffa3
    ctx->pc = 0x183F80u;
    {
        const bool branch_taken_0x183f80 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x183F84u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 32));
        if (branch_taken_0x183f80) {
            ctx->pc = 0x183E10u;
            goto label_183e10;
        }
    }
    ctx->pc = 0x183F88u;
    // 0x183f88: 0xdfb20020
    ctx->pc = 0x183f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f8c: 0xdfb10010
    ctx->pc = 0x183f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183f90: 0xdfb00000
    ctx->pc = 0x183f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f94: 0x3e00008
    ctx->pc = 0x183F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183E10u: goto label_183e10;
            case 0x183E28u: goto label_183e28;
            case 0x183E48u: goto label_183e48;
            case 0x183F2Cu: goto label_183f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183F9Cu;
}
