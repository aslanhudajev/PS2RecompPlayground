#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_Create
// Address: 0x176a68 - 0x176b34
void DTR_Create_0x176a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_Create");


    ctx->pc = 0x176a68u;

    // 0x176a68: 0x27bdffc0
    ctx->pc = 0x176a68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176a6c: 0xffb20020
    ctx->pc = 0x176a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x176a70: 0xffb10010
    ctx->pc = 0x176a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x176a74: 0xa0902d
    ctx->pc = 0x176a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a78: 0xffb00000
    ctx->pc = 0x176a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176a7c: 0xffbf0030
    ctx->pc = 0x176a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176a80: 0xc05efbc
    ctx->pc = 0x176A80u;
    SET_GPR_U32(ctx, 31, 0x176A88u);
    ctx->pc = 0x176A84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A88u; }
        else if (ctx->pc != 0x176A88u) { ctx->pc = 0x176A88u; }
    }
    if (ctx->pc != 0x176A88u) { return; }
    ctx->pc = 0x176A88u;
    // 0x176a88: 0x3c020024
    ctx->pc = 0x176a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x176a8c: 0x282d
    ctx->pc = 0x176a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a90: 0x804387b0
    ctx->pc = 0x176a90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936496)));
    // 0x176a94: 0x1060000c
    ctx->pc = 0x176A94u;
    {
        const bool branch_taken_0x176a94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x176A98u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294936496));
        if (branch_taken_0x176a94) {
            ctx->pc = 0x176AC8u;
            goto label_176ac8;
        }
    }
    ctx->pc = 0x176A9Cu;
    // 0x176a9c: 0x200302d
    ctx->pc = 0x176a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176aa0: 0x200202d
    ctx->pc = 0x176aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176aa4: 0x0
    ctx->pc = 0x176aa4u;
    // NOP
label_176aa8:
    // 0x176aa8: 0x24a50001
    ctx->pc = 0x176aa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x176aac: 0x28a20010
    ctx->pc = 0x176aacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x176ab0: 0x10400005
    ctx->pc = 0x176AB0u;
    {
        const bool branch_taken_0x176ab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176AB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x176ab0) {
            ctx->pc = 0x176AC8u;
            goto label_176ac8;
        }
    }
    ctx->pc = 0x176AB8u;
    // 0x176ab8: 0x51180
    ctx->pc = 0x176ab8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x176abc: 0x80830000
    ctx->pc = 0x176abcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176ac0: 0x1460fff9
    ctx->pc = 0x176AC0u;
    {
        const bool branch_taken_0x176ac0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x176AC4u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x176ac0) {
            ctx->pc = 0x176AA8u;
            goto label_176aa8;
        }
    }
    ctx->pc = 0x176AC8u;
label_176ac8:
    // 0x176ac8: 0x24020010
    ctx->pc = 0x176ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x176acc: 0x14a20003
    ctx->pc = 0x176ACCu;
    {
        const bool branch_taken_0x176acc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x176AD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176acc) {
            ctx->pc = 0x176ADCu;
            goto label_176adc;
        }
    }
    ctx->pc = 0x176AD4u;
    // 0x176ad4: 0x1000000e
    ctx->pc = 0x176AD4u;
    {
        const bool branch_taken_0x176ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176AD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176ad4) {
            ctx->pc = 0x176B10u;
            goto label_176b10;
        }
    }
    ctx->pc = 0x176ADCu;
label_176adc:
    // 0x176adc: 0x282d
    ctx->pc = 0x176adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ae0: 0xc050cfe
    ctx->pc = 0x176AE0u;
    SET_GPR_U32(ctx, 31, 0x176AE8u);
    ctx->pc = 0x176AE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AE8u; }
        else if (ctx->pc != 0x176AE8u) { ctx->pc = 0x176AE8u; }
    }
    if (ctx->pc != 0x176AE8u) { return; }
    ctx->pc = 0x176AE8u;
    // 0x176ae8: 0x24030001
    ctx->pc = 0x176ae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176aec: 0x24020040
    ctx->pc = 0x176aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x176af0: 0xae020038
    ctx->pc = 0x176af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x176af4: 0xae110004
    ctx->pc = 0x176af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x176af8: 0xae120008
    ctx->pc = 0x176af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x176afc: 0xa2030000
    ctx->pc = 0x176afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x176b00: 0xa2000001
    ctx->pc = 0x176b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x176b04: 0xa2000002
    ctx->pc = 0x176b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x176b08: 0xae030030
    ctx->pc = 0x176b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x176b0c: 0xae000034
    ctx->pc = 0x176b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_176b10:
    // 0x176b10: 0xc05efc2
    ctx->pc = 0x176B10u;
    SET_GPR_U32(ctx, 31, 0x176B18u);
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B18u; }
        else if (ctx->pc != 0x176B18u) { ctx->pc = 0x176B18u; }
    }
    if (ctx->pc != 0x176B18u) { return; }
    ctx->pc = 0x176B18u;
    // 0x176b18: 0x200102d
    ctx->pc = 0x176b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b1c: 0xdfbf0030
    ctx->pc = 0x176b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176b20: 0xdfb20020
    ctx->pc = 0x176b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176b24: 0xdfb10010
    ctx->pc = 0x176b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176b28: 0xdfb00000
    ctx->pc = 0x176b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176b2c: 0x3e00008
    ctx->pc = 0x176B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176B30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176AA8u: goto label_176aa8;
            case 0x176AC8u: goto label_176ac8;
            case 0x176ADCu: goto label_176adc;
            case 0x176B10u: goto label_176b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176B34u;
}
