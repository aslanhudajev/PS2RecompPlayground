#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ch3dmaCSC
// Address: 0x163050 - 0x163198
void _ch3dmaCSC_0x163050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ch3dmaCSC");


    ctx->pc = 0x163050u;

    // 0x163050: 0x3c021000
    ctx->pc = 0x163050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x163054: 0x24030008
    ctx->pc = 0x163054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x163058: 0x3442e010
    ctx->pc = 0x163058u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57360));
    // 0x16305c: 0x3c050023
    ctx->pc = 0x16305cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x163060: 0xac430000
    ctx->pc = 0x163060u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x163064: 0x3c041000
    ctx->pc = 0x163064u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x163068: 0x3484b020
    ctx->pc = 0x163068u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x16306c: 0x8ca2a200
    ctx->pc = 0x16306cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294943232)));
    // 0x163070: 0x24420001
    ctx->pc = 0x163070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x163074: 0xaca2a200
    ctx->pc = 0x163074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943232), GPR_U32(ctx, 2));
    // 0x163078: 0x8c830000
    ctx->pc = 0x163078u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x16307c: 0x14600007
    ctx->pc = 0x16307Cu;
    {
        const bool branch_taken_0x16307c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x163080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16307c) {
            ctx->pc = 0x16309Cu;
            goto label_16309c;
        }
    }
    ctx->pc = 0x163084u;
    // 0x163084: 0x3c021000
    ctx->pc = 0x163084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x163088: 0x3442b000
    ctx->pc = 0x163088u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
    // 0x16308c: 0x8c430000
    ctx->pc = 0x16308cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x163090: 0x30630100
    ctx->pc = 0x163090u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x163094: 0x10600005
    ctx->pc = 0x163094u;
    {
        const bool branch_taken_0x163094 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x163098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x163094) {
            ctx->pc = 0x1630ACu;
            goto label_1630ac;
        }
    }
    ctx->pc = 0x16309Cu;
label_16309c:
    // 0x16309c: 0x3c030023
    ctx->pc = 0x16309cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1630a0: 0xac62a1f8
    ctx->pc = 0x1630a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943224), GPR_U32(ctx, 2));
    // 0x1630a4: 0x3e00008
    ctx->pc = 0x1630A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1630A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16309Cu: goto label_16309c;
            case 0x1630ACu: goto label_1630ac;
            case 0x163124u: goto label_163124;
            case 0x163188u: goto label_163188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1630ACu;
label_1630ac:
    // 0x1630ac: 0x3c02002e
    ctx->pc = 0x1630acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1630b0: 0x8ca3a200
    ctx->pc = 0x1630b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294943232)));
    // 0x1630b4: 0x8c44c148
    ctx->pc = 0x1630b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294951240)));
    // 0x1630b8: 0x2484ffff
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1630bc: 0x64182a
    ctx->pc = 0x1630bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1630c0: 0x10600018
    ctx->pc = 0x1630C0u;
    {
        const bool branch_taken_0x1630c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1630C4u;
        SET_GPR_U32(ctx, 8, ((uint32_t)46 << 16));
        if (branch_taken_0x1630c0) {
            ctx->pc = 0x163124u;
            goto label_163124;
        }
    }
    ctx->pc = 0x1630C8u;
    // 0x1630c8: 0x3c021000
    ctx->pc = 0x1630c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1630cc: 0x8d06c144
    ctx->pc = 0x1630ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 4294951236)));
    // 0x1630d0: 0x3442b010
    ctx->pc = 0x1630d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x1630d4: 0x3404ffc0
    ctx->pc = 0x1630d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
    // 0x1630d8: 0x3c03000f
    ctx->pc = 0x1630d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x1630dc: 0xac460000
    ctx->pc = 0x1630dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x1630e0: 0x24070100
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1630e4: 0x3c011001
    ctx->pc = 0x1630e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1630e8: 0xac24b020
    ctx->pc = 0x1630e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x1630ec: 0x3c051000
    ctx->pc = 0x1630ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1630f0: 0x3c047000
    ctx->pc = 0x1630f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x1630f4: 0x3463fc00
    ctx->pc = 0x1630f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64512));
    // 0x1630f8: 0x3c020fff
    ctx->pc = 0x1630f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1630fc: 0xc33021
    ctx->pc = 0x1630fcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x163100: 0x3c011001
    ctx->pc = 0x163100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x163104: 0xac27b000
    ctx->pc = 0x163104u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 7)); // MMIO: 0x1000b000
    // 0x163108: 0x34a52000
    ctx->pc = 0x163108u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8192));
    // 0x16310c: 0x348403ff
    ctx->pc = 0x16310cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1023));
    // 0x163110: 0x3442ffff
    ctx->pc = 0x163110u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x163114: 0xaca40000
    ctx->pc = 0x163114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x163118: 0xc23024
    ctx->pc = 0x163118u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16311c: 0x1000001a
    ctx->pc = 0x16311Cu;
    {
        const bool branch_taken_0x16311c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163120u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294951236), GPR_U32(ctx, 6));
        if (branch_taken_0x16311c) {
            ctx->pc = 0x163188u;
            goto label_163188;
        }
    }
    ctx->pc = 0x163124u;
label_163124:
    // 0x163124: 0x8ca2a200
    ctx->pc = 0x163124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294943232)));
    // 0x163128: 0x14440017
    ctx->pc = 0x163128u;
    {
        const bool branch_taken_0x163128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x16312Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
        if (branch_taken_0x163128) {
            ctx->pc = 0x163188u;
            goto label_163188;
        }
    }
    ctx->pc = 0x163130u;
    // 0x163130: 0x8ca5a200
    ctx->pc = 0x163130u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4294943232)));
    // 0x163134: 0x3c06002e
    ctx->pc = 0x163134u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x163138: 0x8cc4c140
    ctx->pc = 0x163138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4294951232)));
    // 0x16313c: 0x51280
    ctx->pc = 0x16313cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 10));
    // 0x163140: 0x8c67c144
    ctx->pc = 0x163140u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294951236)));
    // 0x163144: 0x451023
    ctx->pc = 0x163144u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x163148: 0x3c031000
    ctx->pc = 0x163148u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x16314c: 0x822023
    ctx->pc = 0x16314cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x163150: 0x3463b010
    ctx->pc = 0x163150u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45072));
    // 0x163154: 0xacc4c140
    ctx->pc = 0x163154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294951232), GPR_U32(ctx, 4));
    // 0x163158: 0x42980
    ctx->pc = 0x163158u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 6));
    // 0x16315c: 0xac670000
    ctx->pc = 0x16315cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x163160: 0x24060100
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x163164: 0x3c011001
    ctx->pc = 0x163164u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x163168: 0xac25b020
    ctx->pc = 0x163168u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 5)); // MMIO: 0x1000b020
    // 0x16316c: 0x3c021000
    ctx->pc = 0x16316cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x163170: 0x3c037000
    ctx->pc = 0x163170u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x163174: 0x3c011001
    ctx->pc = 0x163174u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x163178: 0xac26b000
    ctx->pc = 0x163178u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 6)); // MMIO: 0x1000b000
    // 0x16317c: 0x832025
    ctx->pc = 0x16317cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x163180: 0x34422000
    ctx->pc = 0x163180u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x163184: 0xac440000
    ctx->pc = 0x163184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_163188:
    // 0x163188: 0xf
    ctx->pc = 0x163188u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x16318c: 0x42000038
    ctx->pc = 0x16318cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x163190: 0x3e00008
    ctx->pc = 0x163190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163194u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16309Cu: goto label_16309c;
            case 0x1630ACu: goto label_1630ac;
            case 0x163124u: goto label_163124;
            case 0x163188u: goto label_163188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163198u;
}
