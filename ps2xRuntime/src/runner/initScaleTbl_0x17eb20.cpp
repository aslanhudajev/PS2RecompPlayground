#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initScaleTbl
// Address: 0x17eb20 - 0x17ecb8
void initScaleTbl_0x17eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initScaleTbl");


    ctx->pc = 0x17eb20u;

    // 0x17eb20: 0x27bdff60
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17eb24: 0x202d
    ctx->pc = 0x17eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb28: 0xffbf0090
    ctx->pc = 0x17eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17eb2c: 0xffbe0080
    ctx->pc = 0x17eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x17eb30: 0xffb70070
    ctx->pc = 0x17eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x17eb34: 0xffb60060
    ctx->pc = 0x17eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x17eb38: 0xffb50050
    ctx->pc = 0x17eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x17eb3c: 0xffb40040
    ctx->pc = 0x17eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17eb40: 0xffb30030
    ctx->pc = 0x17eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17eb44: 0xffb20020
    ctx->pc = 0x17eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17eb48: 0xffb10010
    ctx->pc = 0x17eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17eb4c: 0xffb00000
    ctx->pc = 0x17eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eb50: 0x3c05002c
    ctx->pc = 0x17eb50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x17eb54: 0x0
    ctx->pc = 0x17eb54u;
    // NOP
label_17eb58:
    // 0x17eb58: 0x410c0
    ctx->pc = 0x17eb58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x17eb5c: 0x24a5c678
    ctx->pc = 0x17eb5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294952568));
    // 0x17eb60: 0x41980
    ctx->pc = 0x17eb60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 6));
    // 0x17eb64: 0x451021
    ctx->pc = 0x17eb64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17eb68: 0x249e0001
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17eb6c: 0x3c05002e
    ctx->pc = 0x17eb6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x17eb70: 0xdc570000
    ctx->pc = 0x17eb70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eb74: 0x24a54080
    ctx->pc = 0x17eb74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16512));
    // 0x17eb78: 0x49900
    ctx->pc = 0x17eb78u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 4), 4));
    // 0x17eb7c: 0x65a821
    ctx->pc = 0x17eb7cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17eb80: 0x3c14002c
    ctx->pc = 0x17eb80u;
    SET_GPR_U32(ctx, 20, ((uint32_t)44 << 16));
    // 0x17eb84: 0x2694c678
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294952568));
    // 0x17eb88: 0x24160007
    ctx->pc = 0x17eb88u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17eb8c: 0x0
    ctx->pc = 0x17eb8cu;
    // NOP
label_17eb90:
    // 0x17eb90: 0xde850000
    ctx->pc = 0x17eb90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17eb94: 0xc052cb8
    ctx->pc = 0x17EB94u;
    SET_GPR_U32(ctx, 31, 0x17EB9Cu);
    ctx->pc = 0x17EB98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB9Cu; }
        else if (ctx->pc != 0x17EB9Cu) { ctx->pc = 0x17EB9Cu; }
    }
    if (ctx->pc != 0x17EB9Cu) { return; }
    ctx->pc = 0x17EB9Cu;
    // 0x17eb9c: 0x40902d
    ctx->pc = 0x17eb9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eba0: 0x3c030024
    ctx->pc = 0x17eba0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17eba4: 0x246214b8
    ctx->pc = 0x17eba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 5304));
    // 0x17eba8: 0x34058200
    ctx->pc = 0x17eba8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33280));
    // 0x17ebac: 0x52bfc
    ctx->pc = 0x17ebacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x17ebb0: 0x2628821
    ctx->pc = 0x17ebb0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17ebb4: 0xfeb20000
    ctx->pc = 0x17ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 18));
    // 0x17ebb8: 0xc052cb8
    ctx->pc = 0x17EBB8u;
    SET_GPR_U32(ctx, 31, 0x17EBC0u);
    ctx->pc = 0x17EBBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBC0u; }
        else if (ctx->pc != 0x17EBC0u) { ctx->pc = 0x17EBC0u; }
    }
    if (ctx->pc != 0x17EBC0u) { return; }
    ctx->pc = 0x17EBC0u;
    // 0x17ebc0: 0x3405ff80
    ctx->pc = 0x17ebc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17ebc4: 0x52bbc
    ctx->pc = 0x17ebc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x17ebc8: 0xc052c88
    ctx->pc = 0x17EBC8u;
    SET_GPR_U32(ctx, 31, 0x17EBD0u);
    ctx->pc = 0x17EBCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBD0u; }
        else if (ctx->pc != 0x17EBD0u) { ctx->pc = 0x17EBD0u; }
    }
    if (ctx->pc != 0x17EBD0u) { return; }
    ctx->pc = 0x17EBD0u;
    // 0x17ebd0: 0x40802d
    ctx->pc = 0x17ebd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebd4: 0xc052e44
    ctx->pc = 0x17EBD4u;
    SET_GPR_U32(ctx, 31, 0x17EBDCu);
    ctx->pc = 0x17EBD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBDCu; }
        else if (ctx->pc != 0x17EBDCu) { ctx->pc = 0x17EBDCu; }
    }
    if (ctx->pc != 0x17EBDCu) { return; }
    ctx->pc = 0x17EBDCu;
    // 0x17ebdc: 0x40202d
    ctx->pc = 0x17ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebe0: 0xc052e16
    ctx->pc = 0x17EBE0u;
    SET_GPR_U32(ctx, 31, 0x17EBE8u);
    ctx->pc = 0x17EBE4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBE8u; }
        else if (ctx->pc != 0x17EBE8u) { ctx->pc = 0x17EBE8u; }
    }
    if (ctx->pc != 0x17EBE8u) { return; }
    ctx->pc = 0x17EBE8u;
    // 0x17ebe8: 0x40202d
    ctx->pc = 0x17ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebec: 0xc052e02
    ctx->pc = 0x17EBECu;
    SET_GPR_U32(ctx, 31, 0x17EBF4u);
    ctx->pc = 0x17EBF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBF4u; }
        else if (ctx->pc != 0x17EBF4u) { ctx->pc = 0x17EBF4u; }
    }
    if (ctx->pc != 0x17EBF4u) { return; }
    ctx->pc = 0x17EBF4u;
    // 0x17ebf4: 0x18400004
    ctx->pc = 0x17EBF4u;
    {
        const bool branch_taken_0x17ebf4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17EBF8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
        if (branch_taken_0x17ebf4) {
            ctx->pc = 0x17EC08u;
            goto label_17ec08;
        }
    }
    ctx->pc = 0x17EBFCu;
    // 0x17ebfc: 0x96220000
    ctx->pc = 0x17ebfcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ec00: 0x2442ffff
    ctx->pc = 0x17ec00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17ec04: 0xa6220000
    ctx->pc = 0x17ec04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_17ec08:
    // 0x17ec08: 0x240202d
    ctx->pc = 0x17ec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec0c: 0x24a24000
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16384));
    // 0x17ec10: 0x34058280
    ctx->pc = 0x17ec10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33408));
    // 0x17ec14: 0x52bfc
    ctx->pc = 0x17ec14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x17ec18: 0xc052cb8
    ctx->pc = 0x17EC18u;
    SET_GPR_U32(ctx, 31, 0x17EC20u);
    ctx->pc = 0x17EC1Cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC20u; }
        else if (ctx->pc != 0x17EC20u) { ctx->pc = 0x17EC20u; }
    }
    if (ctx->pc != 0x17EC20u) { return; }
    ctx->pc = 0x17EC20u;
    // 0x17ec20: 0x3405ff80
    ctx->pc = 0x17ec20u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17ec24: 0x52bbc
    ctx->pc = 0x17ec24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x17ec28: 0xc052c88
    ctx->pc = 0x17EC28u;
    SET_GPR_U32(ctx, 31, 0x17EC30u);
    ctx->pc = 0x17EC2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC30u; }
        else if (ctx->pc != 0x17EC30u) { ctx->pc = 0x17EC30u; }
    }
    if (ctx->pc != 0x17EC30u) { return; }
    ctx->pc = 0x17EC30u;
    // 0x17ec30: 0x40802d
    ctx->pc = 0x17ec30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec34: 0xc052e44
    ctx->pc = 0x17EC34u;
    SET_GPR_U32(ctx, 31, 0x17EC3Cu);
    ctx->pc = 0x17EC38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC3Cu; }
        else if (ctx->pc != 0x17EC3Cu) { ctx->pc = 0x17EC3Cu; }
    }
    if (ctx->pc != 0x17EC3Cu) { return; }
    ctx->pc = 0x17EC3Cu;
    // 0x17ec3c: 0x40202d
    ctx->pc = 0x17ec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec40: 0xc052e16
    ctx->pc = 0x17EC40u;
    SET_GPR_U32(ctx, 31, 0x17EC48u);
    ctx->pc = 0x17EC44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC48u; }
        else if (ctx->pc != 0x17EC48u) { ctx->pc = 0x17EC48u; }
    }
    if (ctx->pc != 0x17EC48u) { return; }
    ctx->pc = 0x17EC48u;
    // 0x17ec48: 0x40202d
    ctx->pc = 0x17ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec4c: 0xc052e02
    ctx->pc = 0x17EC4Cu;
    SET_GPR_U32(ctx, 31, 0x17EC54u);
    ctx->pc = 0x17EC50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC54u; }
        else if (ctx->pc != 0x17EC54u) { ctx->pc = 0x17EC54u; }
    }
    if (ctx->pc != 0x17EC54u) { return; }
    ctx->pc = 0x17EC54u;
    // 0x17ec54: 0x18400004
    ctx->pc = 0x17EC54u;
    {
        const bool branch_taken_0x17ec54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17EC58u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x17ec54) {
            ctx->pc = 0x17EC68u;
            goto label_17ec68;
        }
    }
    ctx->pc = 0x17EC5Cu;
    // 0x17ec5c: 0x96220000
    ctx->pc = 0x17ec5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ec60: 0x2442ffff
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17ec64: 0xa6220000
    ctx->pc = 0x17ec64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_17ec68:
    // 0x17ec68: 0x26b50008
    ctx->pc = 0x17ec68u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 8));
    // 0x17ec6c: 0x26d6ffff
    ctx->pc = 0x17ec6cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x17ec70: 0x6c1ffc7
    ctx->pc = 0x17EC70u;
    {
        const bool branch_taken_0x17ec70 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x17EC74u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x17ec70) {
            ctx->pc = 0x17EB90u;
            goto label_17eb90;
        }
    }
    ctx->pc = 0x17EC78u;
    // 0x17ec78: 0x3c0202d
    ctx->pc = 0x17ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec7c: 0x28820008
    ctx->pc = 0x17ec7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x17ec80: 0x5440ffb5
    ctx->pc = 0x17EC80u;
    {
        const bool branch_taken_0x17ec80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17ec80) {
            ctx->pc = 0x17EC84u;
            SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
            ctx->pc = 0x17EB58u;
            goto label_17eb58;
        }
    }
    ctx->pc = 0x17EC88u;
    // 0x17ec88: 0xdfbf0090
    ctx->pc = 0x17ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17ec8c: 0xdfbe0080
    ctx->pc = 0x17ec8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ec90: 0xdfb70070
    ctx->pc = 0x17ec90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ec94: 0xdfb60060
    ctx->pc = 0x17ec94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ec98: 0xdfb50050
    ctx->pc = 0x17ec98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ec9c: 0xdfb40040
    ctx->pc = 0x17ec9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17eca0: 0xdfb30030
    ctx->pc = 0x17eca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eca4: 0xdfb20020
    ctx->pc = 0x17eca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eca8: 0xdfb10010
    ctx->pc = 0x17eca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ecac: 0xdfb00000
    ctx->pc = 0x17ecacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ecb0: 0x3e00008
    ctx->pc = 0x17ECB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ECB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB58u: goto label_17eb58;
            case 0x17EB90u: goto label_17eb90;
            case 0x17EC08u: goto label_17ec08;
            case 0x17EC68u: goto label_17ec68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ECB8u;
}
