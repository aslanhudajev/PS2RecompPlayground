#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: ADXB_Create
// Address: 0x167be8 - 0x167cf0
void ADXB_Create_0x167be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_Create");

    std::cerr << "[ADXB_Create] entry" << std::endl;
    ctx->pc = 0x167be8u;

    // 0x167be8: 0x27bdffa0
    ctx->pc = 0x167be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167bec: 0x3c030023
    ctx->pc = 0x167becu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x167bf0: 0xffb20020
    ctx->pc = 0x167bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167bf4: 0xffb40040
    ctx->pc = 0x167bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x167bf8: 0xa0902d
    ctx->pc = 0x167bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bfc: 0xffb30030
    ctx->pc = 0x167bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x167c00: 0xe0a02d
    ctx->pc = 0x167c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c04: 0xffb10010
    ctx->pc = 0x167c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x167c08: 0xc0982d
    ctx->pc = 0x167c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c0c: 0x8462aed0
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294946512)));
    // 0x167c10: 0x80882d
    ctx->pc = 0x167c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c14: 0xffbf0050
    ctx->pc = 0x167c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x167c18: 0x282d
    ctx->pc = 0x167c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c1c: 0x1040000a
    ctx->pc = 0x167C1Cu;
    {
        const bool branch_taken_0x167c1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167C20u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x167c1c) {
            ctx->pc = 0x167C48u;
            goto label_167c48;
        }
    }
    ctx->pc = 0x167C24u;
    // 0x167c24: 0x2464aed0
    ctx->pc = 0x167c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294946512));
    // 0x167c28: 0x24a50001
    ctx->pc = 0x167c28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x167c2c: 0x0
    ctx->pc = 0x167c2cu;
    // NOP
label_167c30:
    // 0x167c30: 0x28a20008
    ctx->pc = 0x167c30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x167c34: 0x10400004
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167C38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 184));
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167C48u;
            goto label_167c48;
        }
    }
    ctx->pc = 0x167C3Cu;
    // 0x167c3c: 0x84820000
    ctx->pc = 0x167c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167c40: 0x5440fffb
    ctx->pc = 0x167C40u;
    {
        const bool branch_taken_0x167c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167c40) {
            ctx->pc = 0x167C44u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x167C30u;
            goto label_167c30;
        }
    }
    ctx->pc = 0x167C48u;
label_167c48:
    // 0x167c48: 0x24020008
    ctx->pc = 0x167c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x167c4c: 0x14a20003
    ctx->pc = 0x167C4Cu;
    {
        const bool branch_taken_0x167c4c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x167C50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 184));
        if (branch_taken_0x167c4c) {
            ctx->pc = 0x167C5Cu;
            goto label_167c5c;
        }
    }
    ctx->pc = 0x167C54u;
    // 0x167c54: 0x1000001e
    ctx->pc = 0x167C54u;
    {
        const bool branch_taken_0x167c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167C58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167c54) {
            ctx->pc = 0x167CD0u;
            goto label_167cd0;
        }
    }
    ctx->pc = 0x167C5Cu;
label_167c5c:
    // 0x167c5c: 0x2463aed0
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946512));
    // 0x167c60: 0xa21018
    ctx->pc = 0x167c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x167c64: 0x240600b8
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 184));
    // 0x167c68: 0x282d
    ctx->pc = 0x167c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c6c: 0x438021
    ctx->pc = 0x167c6cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167c70: 0xc050cfe
    ctx->pc = 0x167C70u;
    SET_GPR_U32(ctx, 31, 0x167C78u);
    ctx->pc = 0x167C74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    std::cerr << "[ADXB_Create] before memset" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C78u; }
        else if (ctx->pc != 0x167C78u) { ctx->pc = 0x167C78u; }
    }
    if (ctx->pc != 0x167C78u) { return; }
    ctx->pc = 0x167C78u;
    // 0x167c78: 0x24030001
    ctx->pc = 0x167c78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167c7c: 0xc05cfac
    ctx->pc = 0x167C7Cu;
    SET_GPR_U32(ctx, 31, 0x167C84u);
    ctx->pc = 0x167C80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x173EB0u;
    std::cerr << "[ADXB_Create] before ADXPD_Create" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_Create_0x173eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C84u; }
        else if (ctx->pc != 0x167C84u) { ctx->pc = 0x167C84u; }
    }
    if (ctx->pc != 0x167C84u) { return; }
    ctx->pc = 0x167C84u;
    // 0x167c84: 0x14400005
    ctx->pc = 0x167C84u;
    {
        const bool branch_taken_0x167c84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167C88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x167c84) {
            ctx->pc = 0x167C9Cu;
            goto label_167c9c;
        }
    }
    ctx->pc = 0x167C8Cu;
    // 0x167c8c: 0xc059f3c
    ctx->pc = 0x167C8Cu;
    SET_GPR_U32(ctx, 31, 0x167C94u);
    ctx->pc = 0x167C90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CF0u;
    std::cerr << "[ADXB_Create] before ADXB_Destroy" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_Destroy_0x167cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C94u; }
        else if (ctx->pc != 0x167C94u) { ctx->pc = 0x167C94u; }
    }
    if (ctx->pc != 0x167C94u) { return; }
    ctx->pc = 0x167C94u;
    // 0x167c94: 0x1000000e
    ctx->pc = 0x167C94u;
    {
        const bool branch_taken_0x167c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167C98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167c94) {
            ctx->pc = 0x167CD0u;
            goto label_167cd0;
        }
    }
    ctx->pc = 0x167C9Cu;
label_167c9c:
    // 0x167c9c: 0x3c030016
    ctx->pc = 0x167c9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)22 << 16));
    // 0x167ca0: 0x3c040016
    ctx->pc = 0x167ca0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22 << 16));
    // 0x167ca4: 0x24637b98
    ctx->pc = 0x167ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 31640));
    // 0x167ca8: 0x24847bc8
    ctx->pc = 0x167ca8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31688));
    // 0x167cac: 0xae110038
    ctx->pc = 0x167cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x167cb0: 0x200102d
    ctx->pc = 0x167cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cb4: 0xae12003c
    ctx->pc = 0x167cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x167cb8: 0xae130040
    ctx->pc = 0x167cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 19));
    // 0x167cbc: 0xae140044
    ctx->pc = 0x167cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x167cc0: 0xae030088
    ctx->pc = 0x167cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x167cc4: 0xae040090
    ctx->pc = 0x167cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
    // 0x167cc8: 0xae10008c
    ctx->pc = 0x167cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 16));
    // 0x167ccc: 0xae100094
    ctx->pc = 0x167cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 16));
label_167cd0:
    // 0x167cd0: 0xdfbf0050
    ctx->pc = 0x167cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167cd4: 0xdfb40040
    ctx->pc = 0x167cd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167cd8: 0xdfb30030
    ctx->pc = 0x167cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167cdc: 0xdfb20020
    ctx->pc = 0x167cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167ce0: 0xdfb10010
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167ce4: 0xdfb00000
    ctx->pc = 0x167ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ce8: 0x3e00008
    ctx->pc = 0x167CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167CECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167C30u: goto label_167c30;
            case 0x167C48u: goto label_167c48;
            case 0x167C5Cu: goto label_167c5c;
            case 0x167C9Cu: goto label_167c9c;
            case 0x167CD0u: goto label_167cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167CF0u;
}
