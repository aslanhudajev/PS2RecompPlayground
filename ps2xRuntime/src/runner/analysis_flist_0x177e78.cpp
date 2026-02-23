#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: analysis_flist
// Address: 0x177e78 - 0x177fac
void analysis_flist_0x177e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("analysis_flist");


    ctx->pc = 0x177e78u;

    // 0x177e78: 0x27bdff70
    ctx->pc = 0x177e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x177e7c: 0xffb60060
    ctx->pc = 0x177e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x177e80: 0xffb50050
    ctx->pc = 0x177e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x177e84: 0x80b02d
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e88: 0xffb40040
    ctx->pc = 0x177e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x177e8c: 0xe0a82d
    ctx->pc = 0x177e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e90: 0xffb30030
    ctx->pc = 0x177e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x177e94: 0xc0a02d
    ctx->pc = 0x177e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e98: 0xffb20020
    ctx->pc = 0x177e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x177e9c: 0x982d
    ctx->pc = 0x177e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ea0: 0xffb10010
    ctx->pc = 0x177ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x177ea4: 0x902d
    ctx->pc = 0x177ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ea8: 0xffbf0080
    ctx->pc = 0x177ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x177eac: 0xa0882d
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177eb0: 0xffb70070
    ctx->pc = 0x177eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x177eb4: 0xffb00000
    ctx->pc = 0x177eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177eb8: 0x82220000
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177ebc: 0x10400027
    ctx->pc = 0x177EBCu;
    {
        const bool branch_taken_0x177ebc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177EC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177ebc) {
            ctx->pc = 0x177F5Cu;
            goto label_177f5c;
        }
    }
    ctx->pc = 0x177EC4u;
    // 0x177ec4: 0x220202d
    ctx->pc = 0x177ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ec8: 0x3c170024
    ctx->pc = 0x177ec8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)36 << 16));
    // 0x177ecc: 0x80830000
    ctx->pc = 0x177eccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177ed0: 0x2402000a
    ctx->pc = 0x177ed0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x177ed4: 0x0
    ctx->pc = 0x177ed4u;
    // NOP
label_177ed8:
    // 0x177ed8: 0x50620004
    ctx->pc = 0x177ED8u;
    {
        const bool branch_taken_0x177ed8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x177ed8) {
            ctx->pc = 0x177EDCu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
            ctx->pc = 0x177EECu;
            goto label_177eec;
        }
    }
    ctx->pc = 0x177EE0u;
    // 0x177ee0: 0x14600016
    ctx->pc = 0x177EE0u;
    {
        const bool branch_taken_0x177ee0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x177EE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x177ee0) {
            ctx->pc = 0x177F3Cu;
            goto label_177f3c;
        }
    }
    ctx->pc = 0x177EE8u;
    // 0x177ee8: 0x8083ffff
    ctx->pc = 0x177ee8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
label_177eec:
    // 0x177eec: 0x2402000d
    ctx->pc = 0x177eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x177ef0: 0x14620002
    ctx->pc = 0x177EF0u;
    {
        const bool branch_taken_0x177ef0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x177EF4u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        if (branch_taken_0x177ef0) {
            ctx->pc = 0x177EFCu;
            goto label_177efc;
        }
    }
    ctx->pc = 0x177EF8u;
    // 0x177ef8: 0xa080ffff
    ctx->pc = 0x177ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_177efc:
    // 0x177efc: 0x2b31818
    ctx->pc = 0x177efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x177f00: 0x1480c0
    ctx->pc = 0x177f00u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 20), 3));
    // 0x177f04: 0x2252821
    ctx->pc = 0x177f04u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x177f08: 0x731021
    ctx->pc = 0x177f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x177f0c: 0x2028021
    ctx->pc = 0x177f0cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x177f10: 0x26730001
    ctx->pc = 0x177f10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x177f14: 0x2d08021
    ctx->pc = 0x177f14u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x177f18: 0xc050c90
    ctx->pc = 0x177F18u;
    SET_GPR_U32(ctx, 31, 0x177F20u);
    ctx->pc = 0x177F1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F20u; }
        else if (ctx->pc != 0x177F20u) { ctx->pc = 0x177F20u; }
    }
    if (ctx->pc != 0x177F20u) { return; }
    ctx->pc = 0x177F20u;
    // 0x177f20: 0xc05dd9e
    ctx->pc = 0x177F20u;
    SET_GPR_U32(ctx, 31, 0x177F28u);
    ctx->pc = 0x177F24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177678u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_to_large_to_yen_0x177678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F28u; }
        else if (ctx->pc != 0x177F28u) { ctx->pc = 0x177F28u; }
    }
    if (ctx->pc != 0x177F28u) { return; }
    ctx->pc = 0x177F28u;
    // 0x177f28: 0x26420001
    ctx->pc = 0x177f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x177f2c: 0x1274000c
    ctx->pc = 0x177F2Cu;
    {
        const bool branch_taken_0x177f2c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 20));
        ctx->pc = 0x177F30u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177f2c) {
            ctx->pc = 0x177F60u;
            goto label_177f60;
        }
    }
    ctx->pc = 0x177F34u;
    // 0x177f34: 0x10000002
    ctx->pc = 0x177F34u;
    {
        const bool branch_taken_0x177f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177F38u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177f34) {
            ctx->pc = 0x177F40u;
            goto label_177f40;
        }
    }
    ctx->pc = 0x177F3Cu;
label_177f3c:
    // 0x177f3c: 0x40902d
    ctx->pc = 0x177f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177f40:
    // 0x177f40: 0x2321021
    ctx->pc = 0x177f40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x177f44: 0x40202d
    ctx->pc = 0x177f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f48: 0x80830000
    ctx->pc = 0x177f48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177f4c: 0x1460ffe2
    ctx->pc = 0x177F4Cu;
    {
        const bool branch_taken_0x177f4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x177F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x177f4c) {
            ctx->pc = 0x177ED8u;
            goto label_177ed8;
        }
    }
    ctx->pc = 0x177F54u;
    // 0x177f54: 0x10000003
    ctx->pc = 0x177F54u;
    {
        const bool branch_taken_0x177f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177F58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294942472)));
        if (branch_taken_0x177f54) {
            ctx->pc = 0x177F64u;
            goto label_177f64;
        }
    }
    ctx->pc = 0x177F5Cu;
label_177f5c:
    // 0x177f5c: 0x3c170024
    ctx->pc = 0x177f5cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)36 << 16));
label_177f60:
    // 0x177f60: 0x8ee29f08
    ctx->pc = 0x177f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294942472)));
label_177f64:
    // 0x177f64: 0x14400005
    ctx->pc = 0x177F64u;
    {
        const bool branch_taken_0x177f64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177F68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 4294942472));
        if (branch_taken_0x177f64) {
            ctx->pc = 0x177F7Cu;
            goto label_177f7c;
        }
    }
    ctx->pc = 0x177F6Cu;
    // 0x177f6c: 0xaef69f08
    ctx->pc = 0x177f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294942472), GPR_U32(ctx, 22));
    // 0x177f70: 0xac75000c
    ctx->pc = 0x177f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 21));
    // 0x177f74: 0xac740008
    ctx->pc = 0x177f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
    // 0x177f78: 0xac730004
    ctx->pc = 0x177f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
label_177f7c:
    // 0x177f7c: 0x260102d
    ctx->pc = 0x177f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f80: 0xdfbf0080
    ctx->pc = 0x177f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177f84: 0xdfb70070
    ctx->pc = 0x177f84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177f88: 0xdfb60060
    ctx->pc = 0x177f88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177f8c: 0xdfb50050
    ctx->pc = 0x177f8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177f90: 0xdfb40040
    ctx->pc = 0x177f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177f94: 0xdfb30030
    ctx->pc = 0x177f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177f98: 0xdfb20020
    ctx->pc = 0x177f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f9c: 0xdfb10010
    ctx->pc = 0x177f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177fa0: 0xdfb00000
    ctx->pc = 0x177fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fa4: 0x3e00008
    ctx->pc = 0x177FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177ED8u: goto label_177ed8;
            case 0x177EECu: goto label_177eec;
            case 0x177EFCu: goto label_177efc;
            case 0x177F3Cu: goto label_177f3c;
            case 0x177F40u: goto label_177f40;
            case 0x177F5Cu: goto label_177f5c;
            case 0x177F60u: goto label_177f60;
            case 0x177F64u: goto label_177f64;
            case 0x177F7Cu: goto label_177f7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177FACu;
}
