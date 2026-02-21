#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decMB0
// Address: 0x123170 - 0x123694
void _decMB0_0x123170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123170u;

    // 0x123170: 0x27bdff40
    ctx->pc = 0x123170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x123174: 0x3c020017
    ctx->pc = 0x123174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x123178: 0xffb60080
    ctx->pc = 0x123178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x12317c: 0x3c0b1000
    ctx->pc = 0x12317cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)4096 << 16));
    // 0x123180: 0xffb50070
    ctx->pc = 0x123180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x123184: 0x356b2010
    ctx->pc = 0x123184u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 8208));
    // 0x123188: 0xffb20040
    ctx->pc = 0x123188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x12318c: 0xa0a82d
    ctx->pc = 0x12318cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123190: 0xffb10030
    ctx->pc = 0x123190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x123194: 0x80902d
    ctx->pc = 0x123194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123198: 0xffbf00b0
    ctx->pc = 0x123198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x12319c: 0xe0882d
    ctx->pc = 0x12319cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231a0: 0xffbe00a0
    ctx->pc = 0x1231a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1231a4: 0x120b02d
    ctx->pc = 0x1231a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231a8: 0xffb70090
    ctx->pc = 0x1231a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1231ac: 0x24040001
    ctx->pc = 0x1231acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1231b0: 0xffb40060
    ctx->pc = 0x1231b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1231b4: 0xffb30050
    ctx->pc = 0x1231b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1231b8: 0xffb00020
    ctx->pc = 0x1231b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1231bc: 0x8c4a197c
    ctx->pc = 0x1231bcu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 6524)));
    // 0x1231c0: 0x8d630000
    ctx->pc = 0x1231c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1231c4: 0x3c02f8ff
    ctx->pc = 0x1231c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)63743 << 16));
    // 0x1231c8: 0x3442ffff
    ctx->pc = 0x1231c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1231cc: 0xa5600
    ctx->pc = 0x1231ccu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 24));
    // 0x1231d0: 0x621824
    ctx->pc = 0x1231d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1231d4: 0x6a1825
    ctx->pc = 0x1231d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1231d8: 0xad630000
    ctx->pc = 0x1231d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1231dc: 0xafa60010
    ctx->pc = 0x1231dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1231e0: 0xc048eda
    ctx->pc = 0x1231E0u;
    SET_GPR_U32(ctx, 31, 0x1231E8u);
    ctx->pc = 0x1231E4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    ctx->pc = 0x123B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x123b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231E8u; }
    }
    if (ctx->pc != 0x1231E8u) { return; }
    ctx->pc = 0x1231E8u;
    // 0x1231e8: 0x40182d
    ctx->pc = 0x1231e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231ec: 0x14600009
    ctx->pc = 0x1231ECu;
    {
        const bool branch_taken_0x1231ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1231F0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1231ec) {
            ctx->pc = 0x123214u;
            goto label_123214;
        }
    }
    ctx->pc = 0x1231F4u;
    // 0x1231f4: 0x3c040017
    ctx->pc = 0x1231f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1231f8: 0xc048006
    ctx->pc = 0x1231F8u;
    SET_GPR_U32(ctx, 31, 0x123200u);
    ctx->pc = 0x1231FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20400));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123200u; }
    }
    if (ctx->pc != 0x123200u) { return; }
    ctx->pc = 0x123200u;
    // 0x123200: 0x24020001
    ctx->pc = 0x123200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x123204: 0x3c030017
    ctx->pc = 0x123204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x123208: 0xac621908
    ctx->pc = 0x123208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 2));
label_12320c:
    // 0x12320c: 0x10000115
    ctx->pc = 0x12320Cu;
    {
        const bool branch_taken_0x12320c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123210u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12320c) {
            ctx->pc = 0x123664u;
            goto label_123664;
        }
    }
    ctx->pc = 0x123214u;
label_123214:
    // 0x123214: 0x3062000c
    ctx->pc = 0x123214u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 12));
    // 0x123218: 0x1040000c
    ctx->pc = 0x123218u;
    {
        const bool branch_taken_0x123218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12321Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x123218) {
            ctx->pc = 0x12324Cu;
            goto label_12324c;
        }
    }
    ctx->pc = 0x123220u;
    // 0x123220: 0x24030003
    ctx->pc = 0x123220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x123224: 0x8c8219ac
    ctx->pc = 0x123224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6572)));
    // 0x123228: 0x14430004
    ctx->pc = 0x123228u;
    {
        const bool branch_taken_0x123228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12322Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123228) {
            ctx->pc = 0x12323Cu;
            goto label_12323c;
        }
    }
    ctx->pc = 0x123230u;
    // 0x123230: 0x8c4319b4
    ctx->pc = 0x123230u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6580)));
    // 0x123234: 0x14600010
    ctx->pc = 0x123234u;
    {
        const bool branch_taken_0x123234 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x123238u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x123234) {
            ctx->pc = 0x123278u;
            goto label_123278;
        }
    }
    ctx->pc = 0x12323Cu;
label_12323c:
    // 0x12323c: 0xc048fdc
    ctx->pc = 0x12323Cu;
    SET_GPR_U32(ctx, 31, 0x123244u);
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123244u; }
    }
    if (ctx->pc != 0x123244u) { return; }
    ctx->pc = 0x123244u;
    // 0x123244: 0x1000000d
    ctx->pc = 0x123244u;
    {
        const bool branch_taken_0x123244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123248u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x123244) {
            ctx->pc = 0x12327Cu;
            goto label_12327c;
        }
    }
    ctx->pc = 0x12324Cu;
label_12324c:
    // 0x12324c: 0x30620001
    ctx->pc = 0x12324cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x123250: 0x1040000a
    ctx->pc = 0x123250u;
    {
        const bool branch_taken_0x123250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123250) {
            ctx->pc = 0x12327Cu;
            goto label_12327c;
        }
    }
    ctx->pc = 0x123258u;
    // 0x123258: 0x8c4319b8
    ctx->pc = 0x123258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6584)));
    // 0x12325c: 0x10600007
    ctx->pc = 0x12325Cu;
    {
        const bool branch_taken_0x12325c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x123260u;
        SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
        if (branch_taken_0x12325c) {
            ctx->pc = 0x12327Cu;
            goto label_12327c;
        }
    }
    ctx->pc = 0x123264u;
    // 0x123264: 0x24020001
    ctx->pc = 0x123264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x123268: 0x8ca319ac
    ctx->pc = 0x123268u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 6572)));
    // 0x12326c: 0x24040002
    ctx->pc = 0x12326cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x123270: 0x38630003
    ctx->pc = 0x123270u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x123274: 0x83100a
    ctx->pc = 0x123274u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_123278:
    // 0x123278: 0xaea20000
    ctx->pc = 0x123278u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_12327c:
    // 0x12327c: 0x3c060017
    ctx->pc = 0x12327cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x123280: 0x24020003
    ctx->pc = 0x123280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x123284: 0x8cc319ac
    ctx->pc = 0x123284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 6572)));
    // 0x123288: 0x14620008
    ctx->pc = 0x123288u;
    {
        const bool branch_taken_0x123288 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12328Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x123288) {
            ctx->pc = 0x1232ACu;
            goto label_1232ac;
        }
    }
    ctx->pc = 0x123290u;
    // 0x123290: 0x24130001
    ctx->pc = 0x123290u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x123294: 0x24020002
    ctx->pc = 0x123294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x123298: 0x38a30001
    ctx->pc = 0x123298u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), 1));
    // 0x12329c: 0x38a40002
    ctx->pc = 0x12329cu;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 5), 2));
    // 0x1232a0: 0x43980a
    ctx->pc = 0x1232a0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x1232a4: 0x10000006
    ctx->pc = 0x1232A4u;
    {
        const bool branch_taken_0x1232a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1232A8u;
        SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1232a4) {
            ctx->pc = 0x1232C0u;
            goto label_1232c0;
        }
    }
    ctx->pc = 0x1232ACu;
label_1232ac:
    // 0x1232ac: 0x24030002
    ctx->pc = 0x1232acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1232b0: 0x24130001
    ctx->pc = 0x1232b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1232b4: 0xa02d
    ctx->pc = 0x1232b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232b8: 0x38a20002
    ctx->pc = 0x1232b8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 2));
    // 0x1232bc: 0x62980a
    ctx->pc = 0x1232bcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_1232c0:
    // 0x1232c0: 0x38a20003
    ctx->pc = 0x1232c0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 3));
    // 0x1232c4: 0xb82d
    ctx->pc = 0x1232c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232c8: 0x16800005
    ctx->pc = 0x1232C8u;
    {
        const bool branch_taken_0x1232c8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x1232CCu;
        SET_GPR_U32(ctx, 30, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1232c8) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1232D0u;
    // 0x1232d0: 0x3c070017
    ctx->pc = 0x1232d0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)23 << 16));
    // 0x1232d4: 0x8ce219ac
    ctx->pc = 0x1232d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 6572)));
    // 0x1232d8: 0x38420003
    ctx->pc = 0x1232d8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x1232dc: 0x2c570001
    ctx->pc = 0x1232dcu;
    SET_GPR_U32(ctx, 23, SLTU32(GPR_U32(ctx, 2), 1));
label_1232e0:
    // 0x1232e0: 0x3c020017
    ctx->pc = 0x1232e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1232e4: 0x8c4319ac
    ctx->pc = 0x1232e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x1232e8: 0x24020003
    ctx->pc = 0x1232e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1232ec: 0x1462000d
    ctx->pc = 0x1232ECu;
    {
        const bool branch_taken_0x1232ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1232F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1232ec) {
            ctx->pc = 0x123324u;
            goto label_123324;
        }
    }
    ctx->pc = 0x1232F4u;
    // 0x1232f4: 0x3c020017
    ctx->pc = 0x1232f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1232f8: 0x8c4319b4
    ctx->pc = 0x1232f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6580)));
    // 0x1232fc: 0x14600009
    ctx->pc = 0x1232FCu;
    {
        const bool branch_taken_0x1232fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x123300u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1232fc) {
            ctx->pc = 0x123324u;
            goto label_123324;
        }
    }
    ctx->pc = 0x123304u;
    // 0x123304: 0x8e420000
    ctx->pc = 0x123304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123308: 0x30420003
    ctx->pc = 0x123308u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x12330c: 0x10400005
    ctx->pc = 0x12330Cu;
    {
        const bool branch_taken_0x12330c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12330c) {
            ctx->pc = 0x123324u;
            goto label_123324;
        }
    }
    ctx->pc = 0x123314u;
    // 0x123314: 0xc048fdc
    ctx->pc = 0x123314u;
    SET_GPR_U32(ctx, 31, 0x12331Cu);
    ctx->pc = 0x123318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12331Cu; }
    }
    if (ctx->pc != 0x12331Cu) { return; }
    ctx->pc = 0x12331Cu;
    // 0x12331c: 0x10000002
    ctx->pc = 0x12331Cu;
    {
        const bool branch_taken_0x12331c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123320u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x12331c) {
            ctx->pc = 0x123328u;
            goto label_123328;
        }
    }
    ctx->pc = 0x123324u;
label_123324:
    // 0x123324: 0x8fa30010
    ctx->pc = 0x123324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_123328:
    // 0x123328: 0xac620000
    ctx->pc = 0x123328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12332c: 0x8e440000
    ctx->pc = 0x12332cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123330: 0x30820010
    ctx->pc = 0x123330u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
    // 0x123334: 0x10400007
    ctx->pc = 0x123334u;
    {
        const bool branch_taken_0x123334 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123338u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x123334) {
            ctx->pc = 0x123354u;
            goto label_123354;
        }
    }
    ctx->pc = 0x12333Cu;
    // 0x12333c: 0x24040005
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x123340: 0xc048fdc
    ctx->pc = 0x123340u;
    SET_GPR_U32(ctx, 31, 0x123348u);
    ctx->pc = 0x123344u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123348u; }
    }
    if (ctx->pc != 0x123348u) { return; }
    ctx->pc = 0x123348u;
    // 0x123348: 0xae021a40
    ctx->pc = 0x123348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6720), GPR_U32(ctx, 2));
    // 0x12334c: 0x8e440000
    ctx->pc = 0x12334cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123350: 0x30820008
    ctx->pc = 0x123350u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_123354:
    // 0x123354: 0x14400007
    ctx->pc = 0x123354u;
    {
        const bool branch_taken_0x123354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123358u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123354) {
            ctx->pc = 0x123374u;
            goto label_123374;
        }
    }
    ctx->pc = 0x12335Cu;
    // 0x12335c: 0x30820001
    ctx->pc = 0x12335cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x123360: 0x10400022
    ctx->pc = 0x123360u;
    {
        const bool branch_taken_0x123360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123360) {
            ctx->pc = 0x1233ECu;
            goto label_1233ec;
        }
    }
    ctx->pc = 0x123368u;
    // 0x123368: 0x8c4319b8
    ctx->pc = 0x123368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6584)));
    // 0x12336c: 0x1060001f
    ctx->pc = 0x12336Cu;
    {
        const bool branch_taken_0x12336c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x123370u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12336c) {
            ctx->pc = 0x1233ECu;
            goto label_1233ec;
        }
    }
    ctx->pc = 0x123374u;
label_123374:
    // 0x123374: 0x8c4320b0
    ctx->pc = 0x123374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x123378: 0x10600011
    ctx->pc = 0x123378u;
    {
        const bool branch_taken_0x123378 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12337Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123378) {
            ctx->pc = 0x1233C0u;
            goto label_1233c0;
        }
    }
    ctx->pc = 0x123380u;
    // 0x123380: 0xafbe0000
    ctx->pc = 0x123380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x123384: 0x24431998
    ctx->pc = 0x123384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6552));
    // 0x123388: 0x8c4a1998
    ctx->pc = 0x123388u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 6552)));
    // 0x12338c: 0x8c6b0004
    ctx->pc = 0x12338cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123390: 0x220202d
    ctx->pc = 0x123390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123394: 0x8fa60014
    ctx->pc = 0x123394u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x123398: 0x254affff
    ctx->pc = 0x123398u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12339c: 0xafb70008
    ctx->pc = 0x12339cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1233a0: 0x256bffff
    ctx->pc = 0x1233a0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1233a4: 0x2c0282d
    ctx->pc = 0x1233a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233a8: 0x382d
    ctx->pc = 0x1233a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233ac: 0x260402d
    ctx->pc = 0x1233acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233b0: 0xc048dc8
    ctx->pc = 0x1233B0u;
    SET_GPR_U32(ctx, 31, 0x1233B8u);
    ctx->pc = 0x1233B4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123720u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x123720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1233B8u; }
    }
    if (ctx->pc != 0x1233B8u) { return; }
    ctx->pc = 0x1233B8u;
    // 0x1233b8: 0x1000000d
    ctx->pc = 0x1233B8u;
    {
        const bool branch_taken_0x1233b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1233BCu;
        SET_GPR_U32(ctx, 30, ((uint32_t)23 << 16));
        if (branch_taken_0x1233b8) {
            ctx->pc = 0x1233F0u;
            goto label_1233f0;
        }
    }
    ctx->pc = 0x1233C0u;
label_1233c0:
    // 0x1233c0: 0x3c020017
    ctx->pc = 0x1233c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1233c4: 0x3c030017
    ctx->pc = 0x1233c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x1233c8: 0x8c461988
    ctx->pc = 0x1233c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 6536)));
    // 0x1233cc: 0x220202d
    ctx->pc = 0x1233ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233d0: 0x8c6a1984
    ctx->pc = 0x1233d0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 6532)));
    // 0x1233d4: 0x2c0282d
    ctx->pc = 0x1233d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233d8: 0x24c6ffff
    ctx->pc = 0x1233d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1233dc: 0x402d
    ctx->pc = 0x1233dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233e0: 0x482d
    ctx->pc = 0x1233e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233e4: 0xc048e28
    ctx->pc = 0x1233E4u;
    SET_GPR_U32(ctx, 31, 0x1233ECu);
    ctx->pc = 0x1233E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1238A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x1238a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1233ECu; }
    }
    if (ctx->pc != 0x1233ECu) { return; }
    ctx->pc = 0x1233ECu;
label_1233ec:
    // 0x1233ec: 0x3c1e0017
    ctx->pc = 0x1233ecu;
    SET_GPR_U32(ctx, 30, ((uint32_t)23 << 16));
label_1233f0:
    // 0x1233f0: 0x8fc21908
    ctx->pc = 0x1233f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 6408)));
    // 0x1233f4: 0x1440009b
    ctx->pc = 0x1233F4u;
    {
        const bool branch_taken_0x1233f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1233F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1233f4) {
            ctx->pc = 0x123664u;
            goto label_123664;
        }
    }
    ctx->pc = 0x1233FCu;
    // 0x1233fc: 0x8e420000
    ctx->pc = 0x1233fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123400: 0x30420004
    ctx->pc = 0x123400u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x123404: 0x1040001f
    ctx->pc = 0x123404u;
    {
        const bool branch_taken_0x123404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123408u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123404) {
            ctx->pc = 0x123484u;
            goto label_123484;
        }
    }
    ctx->pc = 0x12340Cu;
    // 0x12340c: 0x8c4320b0
    ctx->pc = 0x12340cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x123410: 0x10600011
    ctx->pc = 0x123410u;
    {
        const bool branch_taken_0x123410 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x123414u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123410) {
            ctx->pc = 0x123458u;
            goto label_123458;
        }
    }
    ctx->pc = 0x123418u;
    // 0x123418: 0xafb70008
    ctx->pc = 0x123418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x12341c: 0x24421998
    ctx->pc = 0x12341cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6552));
    // 0x123420: 0x8fa60014
    ctx->pc = 0x123420u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x123424: 0x8c4b000c
    ctx->pc = 0x123424u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x123428: 0x2c0282d
    ctx->pc = 0x123428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12342c: 0x8c4a0008
    ctx->pc = 0x12342cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x123430: 0x260402d
    ctx->pc = 0x123430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123434: 0x280482d
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123438: 0x256bffff
    ctx->pc = 0x123438u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x12343c: 0xafa00000
    ctx->pc = 0x12343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x123440: 0x254affff
    ctx->pc = 0x123440u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x123444: 0x220202d
    ctx->pc = 0x123444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123448: 0xc048dc8
    ctx->pc = 0x123448u;
    SET_GPR_U32(ctx, 31, 0x123450u);
    ctx->pc = 0x12344Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123720u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x123720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123450u; }
    }
    if (ctx->pc != 0x123450u) { return; }
    ctx->pc = 0x123450u;
    // 0x123450: 0x1000000d
    ctx->pc = 0x123450u;
    {
        const bool branch_taken_0x123450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123454u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 6408)));
        if (branch_taken_0x123450) {
            ctx->pc = 0x123488u;
            goto label_123488;
        }
    }
    ctx->pc = 0x123458u;
label_123458:
    // 0x123458: 0x3c020017
    ctx->pc = 0x123458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12345c: 0x3c030017
    ctx->pc = 0x12345cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x123460: 0x8c461990
    ctx->pc = 0x123460u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 6544)));
    // 0x123464: 0x2c0282d
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123468: 0x8c6a198c
    ctx->pc = 0x123468u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 6540)));
    // 0x12346c: 0x26240008
    ctx->pc = 0x12346cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    // 0x123470: 0x24c6ffff
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x123474: 0x402d
    ctx->pc = 0x123474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123478: 0x482d
    ctx->pc = 0x123478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12347c: 0xc048e28
    ctx->pc = 0x12347Cu;
    SET_GPR_U32(ctx, 31, 0x123484u);
    ctx->pc = 0x123480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1238A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x1238a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123484u; }
    }
    if (ctx->pc != 0x123484u) { return; }
    ctx->pc = 0x123484u;
label_123484:
    // 0x123484: 0x8fc21908
    ctx->pc = 0x123484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 6408)));
label_123488:
    // 0x123488: 0x14400076
    ctx->pc = 0x123488u;
    {
        const bool branch_taken_0x123488 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12348Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123488) {
            ctx->pc = 0x123664u;
            goto label_123664;
        }
    }
    ctx->pc = 0x123490u;
    // 0x123490: 0x8e440000
    ctx->pc = 0x123490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123494: 0x30820001
    ctx->pc = 0x123494u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x123498: 0x10400007
    ctx->pc = 0x123498u;
    {
        const bool branch_taken_0x123498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12349Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x123498) {
            ctx->pc = 0x1234B8u;
            goto label_1234b8;
        }
    }
    ctx->pc = 0x1234A0u;
    // 0x1234a0: 0x8c4319b8
    ctx->pc = 0x1234a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6584)));
    // 0x1234a4: 0x10600005
    ctx->pc = 0x1234A4u;
    {
        const bool branch_taken_0x1234a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1234A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x1234a4) {
            ctx->pc = 0x1234BCu;
            goto label_1234bc;
        }
    }
    ctx->pc = 0x1234ACu;
    // 0x1234ac: 0xc048f96
    ctx->pc = 0x1234ACu;
    SET_GPR_U32(ctx, 31, 0x1234B4u);
    ctx->pc = 0x1234B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234B4u; }
    }
    if (ctx->pc != 0x1234B4u) { return; }
    ctx->pc = 0x1234B4u;
    // 0x1234b4: 0x8e440000
    ctx->pc = 0x1234b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1234b8:
    // 0x1234b8: 0x30820003
    ctx->pc = 0x1234b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
label_1234bc:
    // 0x1234bc: 0x1040002c
    ctx->pc = 0x1234BCu;
    {
        const bool branch_taken_0x1234bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1234C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1234bc) {
            ctx->pc = 0x123570u;
            goto label_123570;
        }
    }
    ctx->pc = 0x1234C4u;
    // 0x1234c4: 0x24030140
    ctx->pc = 0x1234c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1234c8: 0x24421df8
    ctx->pc = 0x1234c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7672));
    // 0x1234cc: 0x3c070fff
    ctx->pc = 0x1234ccu;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x1234d0: 0x8c450280
    ctx->pc = 0x1234d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1234d4: 0x34e7ffff
    ctx->pc = 0x1234d4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x1234d8: 0x3c0a8000
    ctx->pc = 0x1234d8u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x1234dc: 0x3c061000
    ctx->pc = 0x1234dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1234e0: 0xa32018
    ctx->pc = 0x1234e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1234e4: 0x34c6b010
    ctx->pc = 0x1234e4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 45072));
    // 0x1234e8: 0x24090030
    ctx->pc = 0x1234e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1234ec: 0x3c031000
    ctx->pc = 0x1234ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1234f0: 0x3463b000
    ctx->pc = 0x1234f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x1234f4: 0x24080100
    ctx->pc = 0x1234f4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1234f8: 0x3c100017
    ctx->pc = 0x1234f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x1234fc: 0x822821
    ctx->pc = 0x1234fcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123500: 0x8ca20004
    ctx->pc = 0x123500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x123504: 0x3c041000
    ctx->pc = 0x123504u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x123508: 0x3484b020
    ctx->pc = 0x123508u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x12350c: 0x471024
    ctx->pc = 0x12350cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x123510: 0x4a1025
    ctx->pc = 0x123510u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x123514: 0xacc20000
    ctx->pc = 0x123514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x123518: 0xac890000
    ctx->pc = 0x123518u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x12351c: 0xc048e84
    ctx->pc = 0x12351Cu;
    SET_GPR_U32(ctx, 31, 0x123524u);
    ctx->pc = 0x123520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123524u; }
    }
    if (ctx->pc != 0x123524u) { return; }
    ctx->pc = 0x123524u;
    // 0x123524: 0x3c020017
    ctx->pc = 0x123524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x123528: 0x8e440000
    ctx->pc = 0x123528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12352c: 0x8c451a40
    ctx->pc = 0x12352cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 6720)));
    // 0x123530: 0x3c062000
    ctx->pc = 0x123530u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x123534: 0x8e031a3c
    ctx->pc = 0x123534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6716)));
    // 0x123538: 0x30840001
    ctx->pc = 0x123538u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x12353c: 0x8fa70010
    ctx->pc = 0x12353cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123540: 0x426c0
    ctx->pc = 0x123540u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 27));
    // 0x123544: 0x52c00
    ctx->pc = 0x123544u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x123548: 0x31e80
    ctx->pc = 0x123548u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 26));
    // 0x12354c: 0x8ce20000
    ctx->pc = 0x12354cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123550: 0x852025
    ctx->pc = 0x123550u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x123554: 0x661825
    ctx->pc = 0x123554u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x123558: 0x832025
    ctx->pc = 0x123558u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12355c: 0x21640
    ctx->pc = 0x12355cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 25));
    // 0x123560: 0xc048e78
    ctx->pc = 0x123560u;
    SET_GPR_U32(ctx, 31, 0x123568u);
    ctx->pc = 0x123564u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1239E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123568u; }
    }
    if (ctx->pc != 0x123568u) { return; }
    ctx->pc = 0x123568u;
    // 0x123568: 0x1000000b
    ctx->pc = 0x123568u;
    {
        const bool branch_taken_0x123568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12356Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 6408)));
        if (branch_taken_0x123568) {
            ctx->pc = 0x123598u;
            goto label_123598;
        }
    }
    ctx->pc = 0x123570u;
label_123570:
    // 0x123570: 0x3c030017
    ctx->pc = 0x123570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x123574: 0x24050140
    ctx->pc = 0x123574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x123578: 0x24631df8
    ctx->pc = 0x123578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7672));
    // 0x12357c: 0x24040001
    ctx->pc = 0x12357cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x123580: 0x8c620280
    ctx->pc = 0x123580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x123584: 0x3c100017
    ctx->pc = 0x123584u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x123588: 0x453018
    ctx->pc = 0x123588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x12358c: 0xc31021
    ctx->pc = 0x12358cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x123590: 0xac44013c
    ctx->pc = 0x123590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x123594: 0x8fc21908
    ctx->pc = 0x123594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 6408)));
label_123598:
    // 0x123598: 0x1440ff1c
    ctx->pc = 0x123598u;
    {
        const bool branch_taken_0x123598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12359Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6716), GPR_U32(ctx, 0));
        if (branch_taken_0x123598) {
            ctx->pc = 0x12320Cu;
            goto label_12320c;
        }
    }
    ctx->pc = 0x1235A0u;
    // 0x1235a0: 0x8e420000
    ctx->pc = 0x1235a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1235a4: 0x30420001
    ctx->pc = 0x1235a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1235a8: 0x14400007
    ctx->pc = 0x1235A8u;
    {
        const bool branch_taken_0x1235a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1235ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1235a8) {
            ctx->pc = 0x1235C8u;
            goto label_1235c8;
        }
    }
    ctx->pc = 0x1235B0u;
    // 0x1235b0: 0x24030001
    ctx->pc = 0x1235b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1235b4: 0xae031a3c
    ctx->pc = 0x1235b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6716), GPR_U32(ctx, 3));
    // 0x1235b8: 0x8e420000
    ctx->pc = 0x1235b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1235bc: 0x30420001
    ctx->pc = 0x1235bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1235c0: 0x1040000c
    ctx->pc = 0x1235C0u;
    {
        const bool branch_taken_0x1235c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1235C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1235c0) {
            ctx->pc = 0x1235F4u;
            goto label_1235f4;
        }
    }
    ctx->pc = 0x1235C8u;
label_1235c8:
    // 0x1235c8: 0x8c4319b8
    ctx->pc = 0x1235c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6584)));
    // 0x1235cc: 0x1460000a
    ctx->pc = 0x1235CCu;
    {
        const bool branch_taken_0x1235cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1235D0u;
        SET_GPR_U32(ctx, 7, ((uint32_t)23 << 16));
        if (branch_taken_0x1235cc) {
            ctx->pc = 0x1235F8u;
            goto label_1235f8;
        }
    }
    ctx->pc = 0x1235D4u;
    // 0x1235d4: 0xae200014
    ctx->pc = 0x1235d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1235d8: 0xae200010
    ctx->pc = 0x1235d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1235dc: 0xae200004
    ctx->pc = 0x1235dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1235e0: 0xae200000
    ctx->pc = 0x1235e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1235e4: 0xae20001c
    ctx->pc = 0x1235e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1235e8: 0xae200018
    ctx->pc = 0x1235e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1235ec: 0xae20000c
    ctx->pc = 0x1235ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1235f0: 0xae200008
    ctx->pc = 0x1235f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1235f4:
    // 0x1235f4: 0x3c070017
    ctx->pc = 0x1235f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)23 << 16));
label_1235f8:
    // 0x1235f8: 0x24020002
    ctx->pc = 0x1235f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1235fc: 0x8ce4197c
    ctx->pc = 0x1235fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 6524)));
    // 0x123600: 0x14820018
    ctx->pc = 0x123600u;
    {
        const bool branch_taken_0x123600 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x123604u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x123600) {
            ctx->pc = 0x123664u;
            goto label_123664;
        }
    }
    ctx->pc = 0x123608u;
    // 0x123608: 0x8e420000
    ctx->pc = 0x123608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12360c: 0x30420009
    ctx->pc = 0x12360cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 9));
    // 0x123610: 0x14400014
    ctx->pc = 0x123610u;
    {
        const bool branch_taken_0x123610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123614u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x123610) {
            ctx->pc = 0x123664u;
            goto label_123664;
        }
    }
    ctx->pc = 0x123618u;
    // 0x123618: 0xae200000
    ctx->pc = 0x123618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12361c: 0x3c050017
    ctx->pc = 0x12361cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x123620: 0xae200010
    ctx->pc = 0x123620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x123624: 0x24030003
    ctx->pc = 0x123624u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x123628: 0xae200014
    ctx->pc = 0x123628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x12362c: 0x8ca219ac
    ctx->pc = 0x12362cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 6572)));
    // 0x123630: 0x14430003
    ctx->pc = 0x123630u;
    {
        const bool branch_taken_0x123630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x123634u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x123630) {
            ctx->pc = 0x123640u;
            goto label_123640;
        }
    }
    ctx->pc = 0x123638u;
    // 0x123638: 0x10000009
    ctx->pc = 0x123638u;
    {
        const bool branch_taken_0x123638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12363Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x123638) {
            ctx->pc = 0x123660u;
            goto label_123660;
        }
    }
    ctx->pc = 0x123640u;
label_123640:
    // 0x123640: 0x24030001
    ctx->pc = 0x123640u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x123644: 0x3c060017
    ctx->pc = 0x123644u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x123648: 0xaea30000
    ctx->pc = 0x123648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x12364c: 0x8cc219ac
    ctx->pc = 0x12364cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 6572)));
    // 0x123650: 0x8fa70014
    ctx->pc = 0x123650u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x123654: 0x38420002
    ctx->pc = 0x123654u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x123658: 0x2c420001
    ctx->pc = 0x123658u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x12365c: 0xace20000
    ctx->pc = 0x12365cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_123660:
    // 0x123660: 0x24020001
    ctx->pc = 0x123660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_123664:
    // 0x123664: 0xdfbf00b0
    ctx->pc = 0x123664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x123668: 0xdfbe00a0
    ctx->pc = 0x123668u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12366c: 0xdfb70090
    ctx->pc = 0x12366cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x123670: 0xdfb60080
    ctx->pc = 0x123670u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x123674: 0xdfb50070
    ctx->pc = 0x123674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123678: 0xdfb40060
    ctx->pc = 0x123678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12367c: 0xdfb30050
    ctx->pc = 0x12367cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123680: 0xdfb20040
    ctx->pc = 0x123680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123684: 0xdfb10030
    ctx->pc = 0x123684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123688: 0xdfb00020
    ctx->pc = 0x123688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12368c: 0x3e00008
    ctx->pc = 0x12368Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123690u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12320Cu: goto label_12320c;
            case 0x123214u: goto label_123214;
            case 0x12323Cu: goto label_12323c;
            case 0x12324Cu: goto label_12324c;
            case 0x123278u: goto label_123278;
            case 0x12327Cu: goto label_12327c;
            case 0x1232ACu: goto label_1232ac;
            case 0x1232C0u: goto label_1232c0;
            case 0x1232E0u: goto label_1232e0;
            case 0x123324u: goto label_123324;
            case 0x123328u: goto label_123328;
            case 0x123354u: goto label_123354;
            case 0x123374u: goto label_123374;
            case 0x1233C0u: goto label_1233c0;
            case 0x1233ECu: goto label_1233ec;
            case 0x1233F0u: goto label_1233f0;
            case 0x123458u: goto label_123458;
            case 0x123484u: goto label_123484;
            case 0x123488u: goto label_123488;
            case 0x1234B8u: goto label_1234b8;
            case 0x1234BCu: goto label_1234bc;
            case 0x123570u: goto label_123570;
            case 0x123598u: goto label_123598;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x123640u: goto label_123640;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123694u;
}
