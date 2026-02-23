#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvumc_OneReadMb
// Address: 0x189168 - 0x1893c4
void mpvumc_OneReadMb_0x189168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvumc_OneReadMb");


    ctx->pc = 0x189168u;

label_189168:
    // 0x189168: 0x27bdff50
    ctx->pc = 0x189168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_18916c:
    // 0x18916c: 0x80102d
    ctx->pc = 0x18916cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189170:
    // 0x189170: 0xffbe0090
    ctx->pc = 0x189170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_189174:
    // 0x189174: 0xffb70080
    ctx->pc = 0x189174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_189178:
    // 0x189178: 0xe0f02d
    ctx->pc = 0x189178u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18917c:
    // 0x18917c: 0xffb60070
    ctx->pc = 0x18917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_189180:
    // 0x189180: 0xffb50060
    ctx->pc = 0x189180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_189184:
    // 0x189184: 0xffb30040
    ctx->pc = 0x189184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_189188:
    // 0x189188: 0xffb10020
    ctx->pc = 0x189188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_18918c:
    // 0x18918c: 0xc0982d
    ctx->pc = 0x18918cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_189190:
    // 0x189190: 0xffb00010
    ctx->pc = 0x189190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_189194:
    // 0x189194: 0x100882d
    ctx->pc = 0x189194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_189198:
    // 0x189198: 0xffbf00a0
    ctx->pc = 0x189198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_18919c:
    // 0x18919c: 0x245000c4
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 196));
label_1891a0:
    // 0x1891a0: 0xffb40050
    ctx->pc = 0x1891a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1891a4:
    // 0x1891a4: 0xffb20030
    ctx->pc = 0x1891a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1891a8:
    // 0x1891a8: 0xafa50000
    ctx->pc = 0x1891a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1891ac:
    // 0x1891ac: 0x8c45029c
    ctx->pc = 0x1891acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 668)));
label_1891b0:
    // 0x1891b0: 0x8c420174
    ctx->pc = 0x1891b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 372)));
label_1891b4:
    // 0x1891b4: 0x87d4000e
    ctx->pc = 0x1891b4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
label_1891b8:
    // 0x1891b8: 0x87d2000c
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
label_1891bc:
    // 0x1891bc: 0xc0626fa
label_1891c0:
    if (ctx->pc == 0x1891C0u) {
        ctx->pc = 0x1891C0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1891C4u;
        goto label_1891c4;
    }
    ctx->pc = 0x1891BCu;
    SET_GPR_U32(ctx, 31, 0x1891C4u);
    ctx->pc = 0x1891C0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x189BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_CalcOfs_0x189be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1891C4u; }
        else if (ctx->pc != 0x1891C4u) { ctx->pc = 0x1891C4u; }
    }
    if (ctx->pc != 0x1891C4u) { return; }
    ctx->pc = 0x1891C4u;
label_1891c4:
    // 0x1891c4: 0x8fa20004
    ctx->pc = 0x1891c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1891c8:
    // 0x1891c8: 0x3c09002c
    ctx->pc = 0x1891c8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)44 << 16));
label_1891cc:
    // 0x1891cc: 0x8e270018
    ctx->pc = 0x1891ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1891d0:
    // 0x1891d0: 0x2529ca20
    ctx->pc = 0x1891d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294953504));
label_1891d4:
    // 0x1891d4: 0x25900
    ctx->pc = 0x1891d4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 2), 4));
label_1891d8:
    // 0x1891d8: 0x8e25001c
    ctx->pc = 0x1891d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1891dc:
    // 0x1891dc: 0x717c2
    ctx->pc = 0x1891dcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 31));
label_1891e0:
    // 0x1891e0: 0x8fa40000
    ctx->pc = 0x1891e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1891e4:
    // 0x1891e4: 0xe21021
    ctx->pc = 0x1891e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1891e8:
    // 0x1891e8: 0x8e750000
    ctx->pc = 0x1891e8u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1891ec:
    // 0x1891ec: 0x51fc2
    ctx->pc = 0x1891ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 31));
label_1891f0:
    // 0x1891f0: 0x28843
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
label_1891f4:
    // 0x1891f4: 0xae040008
    ctx->pc = 0x1891f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_1891f8:
    // 0x1891f8: 0xa31821
    ctx->pc = 0x1891f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1891fc:
    // 0x1891fc: 0x21083
    ctx->pc = 0x1891fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_189200:
    // 0x189200: 0x33083
    ctx->pc = 0x189200u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_189204:
    // 0x189204: 0x2a2a821
    ctx->pc = 0x189204u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_189208:
    // 0x189208: 0x8fca0000
    ctx->pc = 0x189208u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_18920c:
    // 0x18920c: 0x30e20001
    ctx->pc = 0x18920cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 1));
label_189210:
    // 0x189210: 0xd23018
    ctx->pc = 0x189210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
label_189214:
    // 0x189214: 0x54043
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
label_189218:
    // 0x189218: 0xafa20008
    ctx->pc = 0x189218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_18921c:
    // 0x18921c: 0x30a50001
    ctx->pc = 0x18921cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
label_189220:
    // 0x189220: 0x21080
    ctx->pc = 0x189220u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_189224:
    // 0x189224: 0x528c0
    ctx->pc = 0x189224u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
label_189228:
    // 0x189228: 0x32310001
    ctx->pc = 0x189228u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 1));
label_18922c:
    // 0x18922c: 0x451021
    ctx->pc = 0x18922cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_189230:
    // 0x189230: 0x31880
    ctx->pc = 0x189230u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_189234:
    // 0x189234: 0x8fa50004
    ctx->pc = 0x189234u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_189238:
    // 0x189238: 0x2a6a821
    ctx->pc = 0x189238u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_18923c:
    // 0x18923c: 0x30630008
    ctx->pc = 0x18923cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
label_189240:
    // 0x189240: 0x112080
    ctx->pc = 0x189240u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_189244:
    // 0x189244: 0x1555021
    ctx->pc = 0x189244u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
label_189248:
    // 0x189248: 0x832021
    ctx->pc = 0x189248u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18924c:
    // 0x18924c: 0x1521821
    ctx->pc = 0x18924cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
label_189250:
    // 0x189250: 0x2258824
    ctx->pc = 0x189250u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_189254:
    // 0x189254: 0x8e730004
    ctx->pc = 0x189254u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_189258:
    // 0x189258: 0x711821
    ctx->pc = 0x189258u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_18925c:
    // 0x18925c: 0x4b1021
    ctx->pc = 0x18925cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_189260:
    // 0x189260: 0xae120010
    ctx->pc = 0x189260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_189264:
    // 0x189264: 0xae030018
    ctx->pc = 0x189264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_189268:
    // 0x189268: 0x491021
    ctx->pc = 0x189268u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_18926c:
    // 0x18926c: 0x8c570000
    ctx->pc = 0x18926cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189270:
    // 0x189270: 0x1144018
    ctx->pc = 0x189270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
label_189274:
    // 0x189274: 0x8fa20008
    ctx->pc = 0x189274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_189278:
    // 0x189278: 0x8b2021
    ctx->pc = 0x189278u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_18927c:
    // 0x18927c: 0x892021
    ctx->pc = 0x18927cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_189280:
    // 0x189280: 0x73843
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_189284:
    // 0x189284: 0x451024
    ctx->pc = 0x189284u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_189288:
    // 0x189288: 0x8c960000
    ctx->pc = 0x189288u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18928c:
    // 0x18928c: 0x2679821
    ctx->pc = 0x18928cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_189290:
    // 0x189290: 0xafa20008
    ctx->pc = 0x189290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_189294:
    // 0x189294: 0x2689821
    ctx->pc = 0x189294u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_189298:
    // 0x189298: 0xae0a0014
    ctx->pc = 0x189298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_18929c:
    // 0x18929c: 0x2c0f809
label_1892a0:
    if (ctx->pc == 0x1892A0u) {
        ctx->pc = 0x1892A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1892A4u;
        goto label_1892a4;
    }
    ctx->pc = 0x18929Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1892A4u);
        ctx->pc = 0x1892A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1892A4u; }
            if (ctx->pc != 0x1892A4u) { return; }
        }
    }
    ctx->pc = 0x1892A4u;
label_1892a4:
    // 0x1892a4: 0x8fa40000
    ctx->pc = 0x1892a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1892a8:
    // 0x1892a8: 0x24830040
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 64));
label_1892ac:
    // 0x1892ac: 0xae030008
    ctx->pc = 0x1892acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1892b0:
    // 0x1892b0: 0x200202d
    ctx->pc = 0x1892b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1892b4:
    // 0x1892b4: 0x8fc20004
    ctx->pc = 0x1892b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1892b8:
    // 0x1892b8: 0x555021
    ctx->pc = 0x1892b8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1892bc:
    // 0x1892bc: 0x1529021
    ctx->pc = 0x1892bcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
label_1892c0:
    // 0x1892c0: 0xae0a0014
    ctx->pc = 0x1892c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_1892c4:
    // 0x1892c4: 0x2519021
    ctx->pc = 0x1892c4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1892c8:
    // 0x1892c8: 0x2c0f809
label_1892cc:
    if (ctx->pc == 0x1892CCu) {
        ctx->pc = 0x1892CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->pc = 0x1892D0u;
        goto label_1892d0;
    }
    ctx->pc = 0x1892C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1892D0u);
        ctx->pc = 0x1892CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1892D0u; }
            if (ctx->pc != 0x1892D0u) { return; }
        }
    }
    ctx->pc = 0x1892D0u;
label_1892d0:
    // 0x1892d0: 0x8fa30008
    ctx->pc = 0x1892d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1892d4:
    // 0x1892d4: 0x200202d
    ctx->pc = 0x1892d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1892d8:
    // 0x1892d8: 0x8fa50000
    ctx->pc = 0x1892d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1892dc:
    // 0x1892dc: 0x2831821
    ctx->pc = 0x1892dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1892e0:
    // 0x1892e0: 0xafa3000c
    ctx->pc = 0x1892e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_1892e4:
    // 0x1892e4: 0x24a20080
    ctx->pc = 0x1892e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 128));
label_1892e8:
    // 0x1892e8: 0xae020008
    ctx->pc = 0x1892e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1892ec:
    // 0x1892ec: 0xae140010
    ctx->pc = 0x1892ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_1892f0:
    // 0x1892f0: 0x8fc20008
    ctx->pc = 0x1892f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1892f4:
    // 0x1892f4: 0x535021
    ctx->pc = 0x1892f4u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1892f8:
    // 0x1892f8: 0xae0a0014
    ctx->pc = 0x1892f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_1892fc:
    // 0x1892fc: 0x1435021
    ctx->pc = 0x1892fcu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_189300:
    // 0x189300: 0x2e0f809
label_189304:
    if (ctx->pc == 0x189304u) {
        ctx->pc = 0x189304u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
        ctx->pc = 0x189308u;
        goto label_189308;
    }
    ctx->pc = 0x189300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x189308u);
        ctx->pc = 0x189304u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189308u; }
            if (ctx->pc != 0x189308u) { return; }
        }
    }
    ctx->pc = 0x189308u;
label_189308:
    // 0x189308: 0x8fa40000
    ctx->pc = 0x189308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18930c:
    // 0x18930c: 0x8e030014
    ctx->pc = 0x18930cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_189310:
    // 0x189310: 0x8e020018
    ctx->pc = 0x189310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_189314:
    // 0x189314: 0x248500c0
    ctx->pc = 0x189314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 192));
label_189318:
    // 0x189318: 0x24630008
    ctx->pc = 0x189318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_18931c:
    // 0x18931c: 0x200202d
    ctx->pc = 0x18931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189320:
    // 0x189320: 0x24420008
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_189324:
    // 0x189324: 0xae050008
    ctx->pc = 0x189324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_189328:
    // 0x189328: 0xae030014
    ctx->pc = 0x189328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_18932c:
    // 0x18932c: 0x2e0f809
label_189330:
    if (ctx->pc == 0x189330u) {
        ctx->pc = 0x189330u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x189334u;
        goto label_189334;
    }
    ctx->pc = 0x18932Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x189334u);
        ctx->pc = 0x189330u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189334u; }
            if (ctx->pc != 0x189334u) { return; }
        }
    }
    ctx->pc = 0x189334u;
label_189334:
    // 0x189334: 0x8fa50000
    ctx->pc = 0x189334u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189338:
    // 0x189338: 0x2694ffff
    ctx->pc = 0x189338u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
label_18933c:
    // 0x18933c: 0x8e020014
    ctx->pc = 0x18933cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_189340:
    // 0x189340: 0x14a0c0
    ctx->pc = 0x189340u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 20), 3));
label_189344:
    // 0x189344: 0x8e030018
    ctx->pc = 0x189344u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_189348:
    // 0x189348: 0x24a40100
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 256));
label_18934c:
    // 0x18934c: 0x541021
    ctx->pc = 0x18934cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_189350:
    // 0x189350: 0xae040008
    ctx->pc = 0x189350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_189354:
    // 0x189354: 0x741821
    ctx->pc = 0x189354u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_189358:
    // 0x189358: 0xae020014
    ctx->pc = 0x189358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_18935c:
    // 0x18935c: 0x200202d
    ctx->pc = 0x18935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189360:
    // 0x189360: 0x2e0f809
label_189364:
    if (ctx->pc == 0x189364u) {
        ctx->pc = 0x189364u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x189368u;
        goto label_189368;
    }
    ctx->pc = 0x189360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x189368u);
        ctx->pc = 0x189364u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189368u; }
            if (ctx->pc != 0x189368u) { return; }
        }
    }
    ctx->pc = 0x189368u;
label_189368:
    // 0x189368: 0x8fa20000
    ctx->pc = 0x189368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18936c:
    // 0x18936c: 0x200202d
    ctx->pc = 0x18936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189370:
    // 0x189370: 0x8e030014
    ctx->pc = 0x189370u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_189374:
    // 0x189374: 0x24420140
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 320));
label_189378:
    // 0x189378: 0xae020008
    ctx->pc = 0x189378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_18937c:
    // 0x18937c: 0x24630008
    ctx->pc = 0x18937cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_189380:
    // 0x189380: 0x8e020018
    ctx->pc = 0x189380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_189384:
    // 0x189384: 0xae030014
    ctx->pc = 0x189384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_189388:
    // 0x189388: 0x24420008
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_18938c:
    // 0x18938c: 0x2e0f809
label_189390:
    if (ctx->pc == 0x189390u) {
        ctx->pc = 0x189390u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x189394u;
        goto label_189394;
    }
    ctx->pc = 0x18938Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x189394u);
        ctx->pc = 0x189390u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189394u; }
            if (ctx->pc != 0x189394u) { return; }
        }
    }
    ctx->pc = 0x189394u;
label_189394:
    // 0x189394: 0xdfbf00a0
    ctx->pc = 0x189394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_189398:
    // 0x189398: 0xdfbe0090
    ctx->pc = 0x189398u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_18939c:
    // 0x18939c: 0xdfb70080
    ctx->pc = 0x18939cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1893a0:
    // 0x1893a0: 0xdfb60070
    ctx->pc = 0x1893a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1893a4:
    // 0x1893a4: 0xdfb50060
    ctx->pc = 0x1893a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1893a8:
    // 0x1893a8: 0xdfb40050
    ctx->pc = 0x1893a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1893ac:
    // 0x1893ac: 0xdfb30040
    ctx->pc = 0x1893acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1893b0:
    // 0x1893b0: 0xdfb20030
    ctx->pc = 0x1893b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1893b4:
    // 0x1893b4: 0xdfb10020
    ctx->pc = 0x1893b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1893b8:
    // 0x1893b8: 0xdfb00010
    ctx->pc = 0x1893b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1893bc:
    // 0x1893bc: 0x3e00008
label_1893c0:
    if (ctx->pc == 0x1893C0u) {
        ctx->pc = 0x1893C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1893C4u;
        goto label_fallthrough_0x1893bc;
    }
    ctx->pc = 0x1893BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1893C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189168u: goto label_189168;
            case 0x18916Cu: goto label_18916c;
            case 0x189170u: goto label_189170;
            case 0x189174u: goto label_189174;
            case 0x189178u: goto label_189178;
            case 0x18917Cu: goto label_18917c;
            case 0x189180u: goto label_189180;
            case 0x189184u: goto label_189184;
            case 0x189188u: goto label_189188;
            case 0x18918Cu: goto label_18918c;
            case 0x189190u: goto label_189190;
            case 0x189194u: goto label_189194;
            case 0x189198u: goto label_189198;
            case 0x18919Cu: goto label_18919c;
            case 0x1891A0u: goto label_1891a0;
            case 0x1891A4u: goto label_1891a4;
            case 0x1891A8u: goto label_1891a8;
            case 0x1891ACu: goto label_1891ac;
            case 0x1891B0u: goto label_1891b0;
            case 0x1891B4u: goto label_1891b4;
            case 0x1891B8u: goto label_1891b8;
            case 0x1891BCu: goto label_1891bc;
            case 0x1891C0u: goto label_1891c0;
            case 0x1891C4u: goto label_1891c4;
            case 0x1891C8u: goto label_1891c8;
            case 0x1891CCu: goto label_1891cc;
            case 0x1891D0u: goto label_1891d0;
            case 0x1891D4u: goto label_1891d4;
            case 0x1891D8u: goto label_1891d8;
            case 0x1891DCu: goto label_1891dc;
            case 0x1891E0u: goto label_1891e0;
            case 0x1891E4u: goto label_1891e4;
            case 0x1891E8u: goto label_1891e8;
            case 0x1891ECu: goto label_1891ec;
            case 0x1891F0u: goto label_1891f0;
            case 0x1891F4u: goto label_1891f4;
            case 0x1891F8u: goto label_1891f8;
            case 0x1891FCu: goto label_1891fc;
            case 0x189200u: goto label_189200;
            case 0x189204u: goto label_189204;
            case 0x189208u: goto label_189208;
            case 0x18920Cu: goto label_18920c;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189218u: goto label_189218;
            case 0x18921Cu: goto label_18921c;
            case 0x189220u: goto label_189220;
            case 0x189224u: goto label_189224;
            case 0x189228u: goto label_189228;
            case 0x18922Cu: goto label_18922c;
            case 0x189230u: goto label_189230;
            case 0x189234u: goto label_189234;
            case 0x189238u: goto label_189238;
            case 0x18923Cu: goto label_18923c;
            case 0x189240u: goto label_189240;
            case 0x189244u: goto label_189244;
            case 0x189248u: goto label_189248;
            case 0x18924Cu: goto label_18924c;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x18925Cu: goto label_18925c;
            case 0x189260u: goto label_189260;
            case 0x189264u: goto label_189264;
            case 0x189268u: goto label_189268;
            case 0x18926Cu: goto label_18926c;
            case 0x189270u: goto label_189270;
            case 0x189274u: goto label_189274;
            case 0x189278u: goto label_189278;
            case 0x18927Cu: goto label_18927c;
            case 0x189280u: goto label_189280;
            case 0x189284u: goto label_189284;
            case 0x189288u: goto label_189288;
            case 0x18928Cu: goto label_18928c;
            case 0x189290u: goto label_189290;
            case 0x189294u: goto label_189294;
            case 0x189298u: goto label_189298;
            case 0x18929Cu: goto label_18929c;
            case 0x1892A0u: goto label_1892a0;
            case 0x1892A4u: goto label_1892a4;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892ACu: goto label_1892ac;
            case 0x1892B0u: goto label_1892b0;
            case 0x1892B4u: goto label_1892b4;
            case 0x1892B8u: goto label_1892b8;
            case 0x1892BCu: goto label_1892bc;
            case 0x1892C0u: goto label_1892c0;
            case 0x1892C4u: goto label_1892c4;
            case 0x1892C8u: goto label_1892c8;
            case 0x1892CCu: goto label_1892cc;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x1892DCu: goto label_1892dc;
            case 0x1892E0u: goto label_1892e0;
            case 0x1892E4u: goto label_1892e4;
            case 0x1892E8u: goto label_1892e8;
            case 0x1892ECu: goto label_1892ec;
            case 0x1892F0u: goto label_1892f0;
            case 0x1892F4u: goto label_1892f4;
            case 0x1892F8u: goto label_1892f8;
            case 0x1892FCu: goto label_1892fc;
            case 0x189300u: goto label_189300;
            case 0x189304u: goto label_189304;
            case 0x189308u: goto label_189308;
            case 0x18930Cu: goto label_18930c;
            case 0x189310u: goto label_189310;
            case 0x189314u: goto label_189314;
            case 0x189318u: goto label_189318;
            case 0x18931Cu: goto label_18931c;
            case 0x189320u: goto label_189320;
            case 0x189324u: goto label_189324;
            case 0x189328u: goto label_189328;
            case 0x18932Cu: goto label_18932c;
            case 0x189330u: goto label_189330;
            case 0x189334u: goto label_189334;
            case 0x189338u: goto label_189338;
            case 0x18933Cu: goto label_18933c;
            case 0x189340u: goto label_189340;
            case 0x189344u: goto label_189344;
            case 0x189348u: goto label_189348;
            case 0x18934Cu: goto label_18934c;
            case 0x189350u: goto label_189350;
            case 0x189354u: goto label_189354;
            case 0x189358u: goto label_189358;
            case 0x18935Cu: goto label_18935c;
            case 0x189360u: goto label_189360;
            case 0x189364u: goto label_189364;
            case 0x189368u: goto label_189368;
            case 0x18936Cu: goto label_18936c;
            case 0x189370u: goto label_189370;
            case 0x189374u: goto label_189374;
            case 0x189378u: goto label_189378;
            case 0x18937Cu: goto label_18937c;
            case 0x189380u: goto label_189380;
            case 0x189384u: goto label_189384;
            case 0x189388u: goto label_189388;
            case 0x18938Cu: goto label_18938c;
            case 0x189390u: goto label_189390;
            case 0x189394u: goto label_189394;
            case 0x189398u: goto label_189398;
            case 0x18939Cu: goto label_18939c;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A4u: goto label_1893a4;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893ACu: goto label_1893ac;
            case 0x1893B0u: goto label_1893b0;
            case 0x1893B4u: goto label_1893b4;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893BCu: goto label_1893bc;
            case 0x1893C0u: goto label_1893c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1893bc:
    ctx->pc = 0x1893C4u;
}
