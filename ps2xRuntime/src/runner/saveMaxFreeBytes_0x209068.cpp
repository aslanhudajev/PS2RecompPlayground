#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveMaxFreeBytes
// Address: 0x209068 - 0x2091a8
void saveMaxFreeBytes_0x209068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209068u;

    // 0x209068: 0x27bdffd0
    ctx->pc = 0x209068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20906c: 0xffbf0020
    ctx->pc = 0x20906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209070: 0xffbe0010
    ctx->pc = 0x209070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x209074: 0x3a0f02d
    ctx->pc = 0x209074u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209078: 0xafc0000c
    ctx->pc = 0x209078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x20907c: 0xafc00000
    ctx->pc = 0x20907cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_209080:
    // 0x209080: 0x8fc20000
    ctx->pc = 0x209080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209084: 0x28430002
    ctx->pc = 0x209084u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x209088: 0x14600003
    ctx->pc = 0x209088u;
    {
        const bool branch_taken_0x209088 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209088) {
            ctx->pc = 0x209098u;
            goto label_209098;
        }
    }
    ctx->pc = 0x209090u;
    // 0x209090: 0x1000003b
    ctx->pc = 0x209090u;
    {
        const bool branch_taken_0x209090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209090) {
            ctx->pc = 0x209180u;
            goto label_209180;
        }
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0xafc00004
    ctx->pc = 0x209098u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x20909c: 0x0
    ctx->pc = 0x20909cu;
    // NOP
label_2090a0:
    // 0x2090a0: 0x8fc20004
    ctx->pc = 0x2090a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2090a4: 0x28430004
    ctx->pc = 0x2090a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x2090a8: 0x14600003
    ctx->pc = 0x2090A8u;
    {
        const bool branch_taken_0x2090a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2090a8) {
            ctx->pc = 0x2090B8u;
            goto label_2090b8;
        }
    }
    ctx->pc = 0x2090B0u;
    // 0x2090b0: 0x1000002e
    ctx->pc = 0x2090B0u;
    {
        const bool branch_taken_0x2090b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2090b0) {
            ctx->pc = 0x20916Cu;
            goto label_20916c;
        }
    }
    ctx->pc = 0x2090B8u;
label_2090b8:
    // 0x2090b8: 0x8fc20004
    ctx->pc = 0x2090b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2090bc: 0x40182d
    ctx->pc = 0x2090bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090c0: 0x31080
    ctx->pc = 0x2090c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2090c4: 0x8fc30000
    ctx->pc = 0x2090c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2090c8: 0x60202d
    ctx->pc = 0x2090c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090cc: 0x41900
    ctx->pc = 0x2090ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2090d0: 0x431021
    ctx->pc = 0x2090d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2090d4: 0x3c030031
    ctx->pc = 0x2090d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2090d8: 0x24632280
    ctx->pc = 0x2090d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x2090dc: 0x621021
    ctx->pc = 0x2090dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2090e0: 0x8c430000
    ctx->pc = 0x2090e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2090e4: 0x24020002
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2090e8: 0x1462001b
    ctx->pc = 0x2090E8u;
    {
        const bool branch_taken_0x2090e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2090e8) {
            ctx->pc = 0x209158u;
            goto label_209158;
        }
    }
    ctx->pc = 0x2090F0u;
    // 0x2090f0: 0x8fc20004
    ctx->pc = 0x2090f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2090f4: 0x40182d
    ctx->pc = 0x2090f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090f8: 0x31080
    ctx->pc = 0x2090f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2090fc: 0x8fc30000
    ctx->pc = 0x2090fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209100: 0x60202d
    ctx->pc = 0x209100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209104: 0x41900
    ctx->pc = 0x209104u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x209108: 0x431021
    ctx->pc = 0x209108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20910c: 0x3c030031
    ctx->pc = 0x20910cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x209110: 0x246322a0
    ctx->pc = 0x209110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x209114: 0x621021
    ctx->pc = 0x209114u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209118: 0x8c430000
    ctx->pc = 0x209118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20911c: 0x24020002
    ctx->pc = 0x20911cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x209120: 0x1462000d
    ctx->pc = 0x209120u;
    {
        const bool branch_taken_0x209120 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x209120) {
            ctx->pc = 0x209158u;
            goto label_209158;
        }
    }
    ctx->pc = 0x209128u;
    // 0x209128: 0x8fc40000
    ctx->pc = 0x209128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20912c: 0x8fc50004
    ctx->pc = 0x20912cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209130: 0xc082380
    ctx->pc = 0x209130u;
    SET_GPR_U32(ctx, 31, 0x209138u);
    ctx->pc = 0x208E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveGetFreeBytes_0x208e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209138u; }
    }
    if (ctx->pc != 0x209138u) { return; }
    ctx->pc = 0x209138u;
    // 0x209138: 0xafc20008
    ctx->pc = 0x209138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x20913c: 0x8fc20008
    ctx->pc = 0x20913cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x209140: 0x8fc3000c
    ctx->pc = 0x209140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x209144: 0x62102a
    ctx->pc = 0x209144u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x209148: 0x10400003
    ctx->pc = 0x209148u;
    {
        const bool branch_taken_0x209148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209148) {
            ctx->pc = 0x209158u;
            goto label_209158;
        }
    }
    ctx->pc = 0x209150u;
    // 0x209150: 0x8fc20008
    ctx->pc = 0x209150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x209154: 0xafc2000c
    ctx->pc = 0x209154u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_209158:
    // 0x209158: 0x8fc20004
    ctx->pc = 0x209158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20915c: 0x24430001
    ctx->pc = 0x20915cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x209160: 0xafc30004
    ctx->pc = 0x209160u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x209164: 0x1000ffce
    ctx->pc = 0x209164u;
    {
        const bool branch_taken_0x209164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209164) {
            ctx->pc = 0x2090A0u;
            goto label_2090a0;
        }
    }
    ctx->pc = 0x20916Cu;
label_20916c:
    // 0x20916c: 0x8fc20000
    ctx->pc = 0x20916cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209170: 0x24430001
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x209174: 0xafc30000
    ctx->pc = 0x209174u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x209178: 0x1000ffc1
    ctx->pc = 0x209178u;
    {
        const bool branch_taken_0x209178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209178) {
            ctx->pc = 0x209080u;
            goto label_209080;
        }
    }
    ctx->pc = 0x209180u;
label_209180:
    // 0x209180: 0x8fc3000c
    ctx->pc = 0x209180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x209184: 0x60102d
    ctx->pc = 0x209184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209188: 0x10000001
    ctx->pc = 0x209188u;
    {
        const bool branch_taken_0x209188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209188) {
            ctx->pc = 0x209190u;
            goto label_209190;
        }
    }
    ctx->pc = 0x209190u;
label_209190:
    // 0x209190: 0x3c0e82d
    ctx->pc = 0x209190u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209194: 0xdfbf0020
    ctx->pc = 0x209194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209198: 0xdfbe0010
    ctx->pc = 0x209198u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20919c: 0x27bd0030
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2091a0: 0x3e00008
    ctx->pc = 0x2091A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209080u: goto label_209080;
            case 0x209098u: goto label_209098;
            case 0x2090A0u: goto label_2090a0;
            case 0x2090B8u: goto label_2090b8;
            case 0x209158u: goto label_209158;
            case 0x20916Cu: goto label_20916c;
            case 0x209180u: goto label_209180;
            case 0x209190u: goto label_209190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2091A8u;
}
